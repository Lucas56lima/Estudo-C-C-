#include <stdio.h>
#include <locale.h>
#include <string.h>

struct tipo_pessoa
    {
      char nome[20];
      int idade;
      float peso;      

    };

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Criando e inicializando;

    tipo_pessoa pes = {"Teste",0,0.0};

    printf("Início:\n");
    printf("pes.nome: %s\n",pes.nome);
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);

    pes.idade = 27;
    pes.peso = 81;
    strcpy(pes.nome,"Lucas");

    printf("\nAlterando os campos via código:\n");
    printf("pes.nome: %s\n",pes.nome);
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);

    printf("\nInsira seu nome: \n");
    scanf("%s",&pes.nome);
    fflush(stdin);

    printf("\nInsira sua idade: \n");
    scanf("%d",&pes.idade);
    fflush(stdin);

    printf("\nInsira seu peso: \n");
    scanf("%f",&pes.peso);
    fflush(stdin);

    printf("pes.nome: %s\n",pes.nome);
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);    

    return 0;
}

