#include <iostream>
#include <tchar.h>
#include <string>

int main(int argc, char const *argv[])

//Pode utilizar () para iniciar variáveis com valores literais

// {} é inicialização uniforme, permite tanto iniciar valores literais (int, float, cartacter), quanto valores escalares (vetores, enums etc)
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int numeroInteiro{12};
    float numeroReal {34.56};
    char caractere{'c'};
    
    std::string texto{"Texto da String"};

    std::printf("Valor número inteiro = %d\n", numeroInteiro);
    std::printf("Valor número Real = %.2f\n", numeroReal);
    std::printf("Caracter = %c\n", caractere);

    std::cout << "" << texto <<"\n";

    system("pause");

    
    return 0;
}
