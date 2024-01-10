#include <iostream>

int main(int argc, char const *argv[])
{
    int numero{4890};
    char letra{'E'};
    void *ptrG;
    ptrG = &letra;

    //Para atribuir um valor para um ponteiro genérioc, deve-se fazer o Cast
    // *(cast para tipo desejado*)NomedoPonteiro

    std::cout << "Valor de letra via ptrG = " << *(char*)ptrG <<"\n";

    ptrG = &numero;    
    std::cout << "Valor de numero via ptrG = " << *(int*)ptrG <<"\n";
    
    return 0;
}
