#include <stdio.h>

int main(){
    char texto[100];
    
    printf("Digite um texto: ");
    scanf("%[^\n]s\n", texto);
    fflush(stdin);

    printf("Você digitou: %s\n", texto);
    
}