#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    char str[50] = "Exemplo de string em C";
    puts(str);

    //Altera os dados da memória
    memset(str,'!',7);
    puts(str);

    system("pause");

    return 0;
}

