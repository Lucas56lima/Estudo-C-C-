/*Crie uma variável de nome Numero do tipo inteiro e valor inicial 
igual a 234.x
Crie um ponteiro de nome Ponteiro capaz de apontar para uma variável do tipo inteiro.x
Troque o valor de Numero para 1456 usando ponteiro;x
Coloque o valor de Numero na tela usando Ponteiro x
Mostre o endereço da memória RAM em que estão alocados.x
Crie um outro ponteiro de noma outroPtr x
Faça outroPtr apontar para a mesma variável que ptr aponta.x
Usando o Ponteiro, some 200 ao valor contido em Numero x
Usando outroPtr coloque na tela o valor de Numero. x
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero{234};
    int* ptr{&numero};

    *ptr = 1456;

    std::cout <<"\nO valor de numero é: " << *ptr << "\n";

    std::cout <<"\nO Endereço de numero é: " << &numero << "\n";
    std::cout <<"\nO Endereço de ptr é: " << &ptr << "\n";

    int* otherPtr{ptr};

    *ptr = *ptr + 200;

     std::cout <<"\nO novo valor de numero é: " << *otherPtr << "\n";

    return 0;
}
