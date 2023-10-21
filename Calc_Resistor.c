#include <stdio.h>
#include <stdlib.h>


float Vin = 0;
float Vled = 0;
float Iled = 0;
float R = 0;

int main(){

    printf("\n\n ----- RESISTOR CALC ----- \n\n");
    
    printf("Digite o valor de Vin: ");  // Pegar valor de entrada de energia
    scanf("%f",&Vin);

    printf("Digite o valor de Vled ");
    scanf("%f" ,&Vled);

    printf("Digite o valor de Iled: ");
    scanf("%F", &Iled);
    
    R = (Vin-Vled)/Iled;

    printf("Vin = %.2f\n\n", Vin);
    printf("Vled = %.2f\n", Vled);
    printf("Iled = %.2f\n", Iled);
    
    printf("O valor para o resistor será de: %.2f\n", R);
    
}