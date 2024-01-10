#include <iostream>
#include <fstream>
#include <string>


// Função callback para o envio do e-mail usando libcurl
size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t total_size = size * nmemb;
    output->append((char*)contents, total_size);
    return total_size;
}

int main() {
    // 1. Capturar XML
    std::ifstream xmlFile("exemplo.xml");
    std::string xmlContent((std::istreambuf_iterator<char>(xmlFile)), std::istreambuf_iterator<char>());

    // 2. Configurar o envio de e-mails com libcurl
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl) {
        // Configurações do e-mail
        curl_easy_setopt(curl, CURLOPT_URL, "smtp://seu-servidor-smtp.com:porta");
        curl_easy_setopt(curl, CURLOPT_MAIL_FROM, "seu-email@gmail.com");
        curl_easy_setopt(curl, CURLOPT_USERNAME, "seu-email@gmail.com");
        curl_easy_setopt(curl, CURLOPT_PASSWORD, "sua-senha");

        // Configurar destinatário
        struct curl_slist* recipients = NULL;
        recipients = curl_slist_append(recipients, "destinatario@email.com");
        curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);

        // Configurar mensagem
        curl_easy_setopt(curl, CURLOPT_READFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_READDATA, &xmlContent);

        // Adicionar anexo
        curl_mime* mime;
        curl_mimepart* part;
        mime = curl_mime_init(curl);
        part = curl_mime_addpart(mime);
        curl_mime_data(part, xmlContent.c_str(), CURL_ZERO_TERMINATED);
        curl_easy_setopt(curl, CURLOPT_MIMEPOST, mime);

        // Enviar e-mail
        res = curl_easy_perform(curl);

        // Limpar
        curl_slist_free_all(recipients);
        curl_easy_cleanup(curl);
        curl_global_cleanup();
    }

    return 0;
}
