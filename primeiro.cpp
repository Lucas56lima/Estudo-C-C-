#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>


int main(int argc, char const *argv[])
{   
    setlocale(LC_ALL,"Portuguese");
    int numero01,numero02,soma;
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero01;

    std::cout << "Número 01 = " << numero01 << std::endl;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero02;

    soma = numero01 + numero02;
    std::cout << "Número 02 = " << numero02 << std::endl;
    std::cout << "A soma dos números é: " << soma << std::endl;
    system("Pause");
    return 0;
}
