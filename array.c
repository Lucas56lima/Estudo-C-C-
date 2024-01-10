#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, paresI = 0, imparesI = 0, len;

    int numeros[] = {3, 4, 1, 4, 2};
    int pares[5]; // Tamanho definido para o maior caso possível
    int impares[5]; // Tamanho definido para o maior caso possível

    len = sizeof(numeros) / sizeof(int);

    printf("%d\n", len);

    for (i = 0; i < len; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("É par!\n");
            pares[paresI] = numeros[i];
            printf("%d\n", pares[paresI]);
            paresI++;
        }
        else
        {
            printf("É ímpar!\n");
            impares[imparesI] = numeros[i];
            printf("%d\n", impares[imparesI]);
            imparesI++;
        }
    }

    len = paresI; // Agora len contém o número real de elementos em pares

    for (i = 0; i < len; i++)
    {
        printf("%d ,", impares[i]);
    }

    return 0;
}


