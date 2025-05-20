#include <stdio.h>

int main(){
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float media = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota:");
    scanf("%f", &n3);

    media = n1 + n2 + n3;
    media = media/3;
    printf("Média: %.2f\n", media);

    if (media >= 5){
        printf("Aluno aprovado!");
    }
}