#include <stdio.h>

int main(){
    int A, B, soma, subt, mult, divi;

    printf("Digite o primeiro número: ");
    scanf("%d", &A);
    printf("Digite o segundo número: ");
    scanf("%d", &B);

    soma = A + B;
    subt = A - B;
    mult = A * B;
    divi = A / B;

    printf("Soma: %d. \n", soma);
    printf("Subtração: %d. \n", subt);
    printf("Multiplicação: %d. \n", mult);
    printf("Divisão: %d. \n", divi);

}