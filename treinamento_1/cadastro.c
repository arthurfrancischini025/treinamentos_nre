#include <stdio.h>

int main() {
    int idade = 0;
    float altura = 0;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Altura: ");
    scanf("%f", &altura);

    printf("Voce tem %d anos e mede %.2f metros de altura\n", idade, altura);

    return 0;

}