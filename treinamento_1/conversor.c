#include <stdio.h>

int main(){
    float temp, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp);

    F = (temp * 9/5) + 32;

    printf("Temperatura em Fahrenheit: %.3f.", F);
}