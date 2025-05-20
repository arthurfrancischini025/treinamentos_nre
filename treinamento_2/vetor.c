#include <stdio.h>

int main(){
    int numeros[10];
    int i;
    int j;
    int pares = 0;
    int impares = 0;

    for (i=0;i<10;i++){
        printf("Digite um número:");
        scanf("%d", &numeros[i]);
    }
    for(j=0;j<10;j++){
        if (numeros[j] % 2 == 0){
            pares++;
        }
        else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d", impares);
}