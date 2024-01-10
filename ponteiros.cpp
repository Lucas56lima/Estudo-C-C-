#include <iostream>


int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero = 10;
    double salario  = 4567.00;
    // O sizeof é utilizado para saber o tamanho em bits de uma variável.

    std::cout << "\n Tamanho Variavel numero: " << sizeof(numero) << "\n";
    std::cout << "\n Tamanho Variavel salario: " << sizeof(salario) << "\n";

    // Para saber o endereço de memória de uma varíavel, basta colocar o & no inicio antes de chaamar a mesma.
    std::cout << "\n Endereço de memoria da Variavel numero: " << &numero << "\n";
    std::cout << "\n Endereço de memoria da Variavel salario: " << &salario << "\n";

    //Para criar uma variável ponteiro, deve ser utilizado o * na declaração

    int *ptr = nullptr;
    int valor = 101;

    std::cout << "Endereço de valor: " << &valor <<"\n";
    std::cout << "Endereço de ptr: " << &ptr <<"\n" ;

    // As variáveis geralmente vêm com lixo de memoria, as de ponteiros não são diferentes
    // Para resolver isso declaramos o ponteiro assim

    
    ptr = &numero;
    // Varivaies ponteiros contendo endereço de outra variavel, pode alterar o valor da mesma

    *ptr = 103;

    std::cout << "Valor de numero: " << numero << "\n";




    system("PAUSE");
    return 0;
}
