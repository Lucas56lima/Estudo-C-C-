
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Permite altribuit valores à uma string, pois não da para fazer via sinal de "="
#include <locale.h>


int main()
{
    char s[30];

    printf("Digite algo (scanf convencional): \n");
    scanf("%s",s);
    fflush(stdin);

    printf("Resultado: %s\n\n",s);

    printf("Digite algo (scanf aprimorado): \n");
    scanf("%29[^\n]s",s);
    fflush(stdin);

    printf("Resultado: %s\n\n",s);

    // Leitura pelo gets, ele não limita quantidade de caracteres.
    printf("Digite algo (leitura pelo gets): \n");
    gets(s);
    fflush(stdin);

    printf("Resultado: %s\n\n",s);

    //Leitura pelo fgets, ele limita a quantidade de caracteres pelo tamanho informado.
    printf("Digite algo (leitura pelo fgets): \n");
    fgets(s,10,stdin);
    fflush(stdin);

    printf("Resultado: %s\n\n",s);

    //Leitura pelo puts, ele limita a quantidade de caracteres pelo tamanho da variavel.
    printf("Digite algo (leitura pelo puts): \n");
    puts(s);
    fflush(stdin);

    printf("Resultado: %s\n\n",s);
   

    return 0;
}



