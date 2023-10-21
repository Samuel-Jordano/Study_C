#include <stdio.h>
#include <stdlib.h>

float peso = 0;
float altura = 0;
float IMC ;


int main(){

    printf("\n ----- Calculadora IMC ----- \n");
    printf(" -----   Version 1.0   ----- ");
    printf("\n\n");

    printf("Qual seu peso em (Kg): ");
    scanf("%f", &peso);

    printf("Qual sua altura em (m²): ");
    scanf("%f", &altura);

    IMC = peso/(altura * altura);
    
    printf("Seu IMC é: %.2f ", IMC);
    printf("\n\n");

    if (IMC <= 18.5)
    {
        printf("Você está abaixo do seu peso!\n\n");
    } else if (IMC >= 18.5 && IMC <= 24.9 )
    {
        printf("Você está em seu peso normal.\n\n");
    } else if (IMC >= 25 && IMC <= 29.9)
    {
        printf("Você está sobrepeso.\n\n");
    } else if (IMC >= 30 && IMC <= 34.9)
    {
        printf("Você está em Obesidade Grau 1\n\n");
    }else if (IMC >= 35 && IMC <= 39.9)
    {
            printf("Você está em Obesidade Grau 2\n\n");
    }else if (IMC >= 40)
    {
        printf("Você está em Obesidade Superior, Procure um médico!\n\n");
    } 

    printf("\n ----------------------------\n");
    
    return 0;
}