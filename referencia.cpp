/*Referência é um apelido para alguma variavel, não possui endereço de
próprio, pois trata-se da mesma variavel mas com um rotulo diferente.
*/

#include <iostream>

int main()
{
    int numero{10};

    //Para inserir uma referência, utiliza-se o & antes do nome da variavel.
    
    int &ref = numero;

    std::cout << "\nValor de ref: " << ref << "\n";

    std::cout << "\n Endereço de numero: " << &numero << "\n";
    std::cout << "\n Endereço de ref: " << &ref << "\n";

    return 0;
}


