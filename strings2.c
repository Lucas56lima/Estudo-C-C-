#include <string.h>
#include <stdio.h>
#include <locale.h>


int main()
{      
    
    setlocale(LC_ALL,"Portuguese");

    char origem[20] = {"Olá Mundo!"};
    char destino[20];

    char s1[50] = {"Lógica de "};
    char s2[50] = {"Programação"};


    printf("Antes do strcpy:\n");
    puts(origem);   
    puts(destino);  

    //Altera conteúdo da string

    strcpy(destino,origem);

    printf("Depois do strcpy:\n");
    puts(origem);   
    puts(destino);

    
    //----------------------------
    

    // Concatena strings

    printf("Antes do strcat:\n");
    printf("str1: %s\n",s1);
    printf("str2: %s\n",s2);

    strcat(s1,s2);

    printf("Depois do strcat:\n");
    puts(s1);   
        
    //----------------------------

    // Verifica a quantidade de caracteres
    char s[10];
    int i;

    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);

    fflush(stdin);

    printf("\nTamanho do texto: %d\n\n",i);

    printf("Impressão de posição a posição:\n");
    for (i = 0; i < strlen(s); i++)
    {
        printf("%c",s[i]);
    }
    //--------------------------------------

   

    //verifica se os textos são iguais

    char hardText[20] = {"/exit"};
    char senha_usr[20];
    int ok;

    printf("Digite um texto: \n");
    gets(senha_usr);

    fflush(stdin);
    
    ok = strcmp(hardText,senha_usr);

    if (ok == 0)
    {
        printf("Textos ioguais.\n");
    }else{
        printf("Textos diferentes.\n");
    }
    
     return 0;
}
