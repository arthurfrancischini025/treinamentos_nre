#include <stdio.h>
#include <stdbool.h>

int main(){
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int soma = 0;
    bool negativo = false;

    printf("Digite um número: ");
    scanf("%d", &n1);
    if (n1 >= 0){
        soma += n1;
    }
    else {
        negativo = true;
    }

    printf("Digite um número: ");
    scanf("%d", &n2);
    if (n2 >= 0){
        soma += n2;
    }
    else {
        negativo = true;
    }

    printf("Digite um número:");
    scanf("%d", &n3);
    if (n3 >= 0){
        soma += n3;
    }
    else {
        negativo = true;
    }

    printf("Digite um número:");
    scanf("%d", &n4);
    if (n4 >= 0){
        soma += n4;
    }
    else {
        negativo = true;
    }

    printf("A soma dos números positivos é %d\n", soma);
    if (negativo == true){
        printf("Fim do programa!");
    }
}