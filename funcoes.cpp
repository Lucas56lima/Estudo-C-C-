#include <iostream>
#include <cstring>
#include <locale.h>
#include <fcntl.h>
#include <io.h>

int calcular(int num1, int num2, const char* operador) {
    int resultado = 0;

    if (strcmp(operador, "+") == 0) {
        resultado = num1 + num2;
        std::cout << "Soma igual a: " << resultado << "\n";
    } else if (strcmp(operador, "-") == 0) {
        resultado = num1 - num2;
        std::cout << "Subtração igual a: " << resultado << "\n";
    } else if (strcmp(operador, "*") == 0) {
        resultado = num1 * num2;
        std::cout << "Multiplicação igual a: " << resultado << "\n";
    } else if (strcmp(operador, "/") == 0) {
        if (num2 != 0) {
            resultado = num1 / num2;
            std::cout << "Divisão igual a: " << resultado << "\n";
        } else {
            std::cout << "Erro: Divisão por zero.\n";
        }
    } else {
        std::cout << "Operador inválido.\n";
    }

    return resultado;
}

int main() {    
    setlocale(LC_ALL, "pt_PT.UTF-8");

    int num1, num2;
    char operador[10]; // Aumentei o tamanho para acomodar operadores maiores
    std::cout << "Digite o primeiro número: \n";
    std::cin >> num1;
    std::cout << "Insira o operador: \n";
    std::cin >> operador;
    std::cout << "Digite o segundo número: \n";
    std::cin >> num2;

    calcular(num1, num2, operador);

    return 0;
}
