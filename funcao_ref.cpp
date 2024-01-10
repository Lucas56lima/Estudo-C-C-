#include <iostream>

//Troca numeros com ref
void TrocaNumerosRef(int& num1, int& num2);
void TrocaNumerosPtr(int* num1, int* num2);

int main()
{
    
    setlocale(LC_ALL,"portuguese");

    int numero1, numero2;

    std::cout << "\nDigite o primeiro numero: ";
    std::cin >> numero1;
    std::cout << "\nDigite o segundo numero: ";
    std::cin >> numero2;
    std::cout << "\nNumero1: " << numero1;
    std::cout << "\nNumero2: " << numero2;
    std::cout << "\nValores depois da troca com ref";
    TrocaNumerosRef(numero1,numero2);
    std::cout << "\nNumero1: " << numero1;
    std::cout << "\nNumero2: " << numero2;

    std::cout << "\nDigite o primeiro numero: ";
    std::cin >> numero1;
    std::cout << "\nDigite o segundo numero: ";
    std::cin >> numero2;
    std::cout << "\nValores depois da troca com Ponteiro";
    TrocaNumerosPtr(&numero1,&numero2);
    std::cout << "\nNumero1: " << numero1;
    std::cout << "\nNumero2: " << numero2 << "\n";

    
    system("PAUSE");
    return 0;
}

void TrocaNumerosRef(int& num1,int& num2){
    /*Como fazer a troca de valoresa de dois numeros?
    Precisamos de um local temporário para armazenar o valor de Num1 antes dele receber novo valor!
    Variável temporária que guarda valor de num1
    */

   int Temp{num1};

   num1 = num2;

   num2 = Temp;
}

void TrocaNumerosPtr(int* num1, int* num2){

    int Temp{*num1};

    *num1 = *num2;

    *num2 = Temp;

}
