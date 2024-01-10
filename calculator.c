
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int valor1, valor2, resultado;
    char operador[2]; // Aumentei o tamanho para 2 para acomodar o caractere nulo '\0'
    
    printf("Digite o primeiro numero:\n");
    scanf("%d", &valor1);
    printf("Insira o operador (Ex: +, -, *, /):\n");
    scanf("%s", operador);
    printf("Digite o segundo numero:\n");
    scanf("%d", &valor2);

    if (strcmp(operador, "+") == 0) {
        resultado = valor1 + valor2;
        printf("A soma dos valores é %d\n", resultado);
    } else if (strcmp(operador, "-") == 0) {
        resultado = valor1 - valor2;
        printf("A subtração dos valores é %d\n", resultado);
    } else if (strcmp(operador, "*") == 0) {
        resultado = valor1 * valor2;
        printf("A multiplicação dos valores é %d\n", resultado);
    } else if (strcmp(operador, "/") == 0 && valor2 != 0) {
        resultado = valor1 / valor2;
        printf("A divisão dos valores é %d\n", resultado);
    } else {
        printf("Operador inválido ou divisão por zero.\n");
    }

    system("pause");
    return 0;
}
