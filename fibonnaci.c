#include <stdio.h>

void fibonacci(int n) {
    int primeiro = 0, segundo = 1, proximo, i;

    printf("Sequencia de Fibonacci com %d termos:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            proximo = i;
        else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d ", proximo);
    }
    
}

int main() {
    int termos;

    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &termos);

    fibonacci(termos);

    return 0;
}
