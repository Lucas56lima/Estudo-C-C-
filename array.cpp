#include <iostream>
#include <string>

/*
    Crie um programa que recebea o nome do aluno, suas 5 notas e depois mostre
    a media destas notas.
*/

int main()
{
    int i,len,posicao;
    posicao = 1;
    float nota,float soma{0},float media;
    float notasLista[5];
    std::string nomeALuno;

    len = sizeof(notasLista)/sizeof(int);

    std::cout << "\nInsira o nome do aluno" <<"\n";
    std::cin >> nomeALuno;

    for (i = 0; i < len; i++)
    {
        std::cout << "Insira a nota " << posicao << ": \n";
        std:: cin >> nota;

        notasLista[i] = nota;
        soma += notasLista[i];

        posicao++;        
    }

    media = soma/(len);

    std::cout << "\nA media do aluno " << nomeALuno << " igual a: " << media << "\n";
     
    
    return 0;
}
