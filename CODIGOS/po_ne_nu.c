#include <stdio.h>

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("positivo\n");
    } else if (n < 0) {
        printf("negativo\n");
    } else {
        printf("nulo\n");
    }

    return 0;
}
