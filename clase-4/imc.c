#include<stdio.h>

int main(){

    float imc,masa,estatura;

    printf("\n\t Dame tu masa (kg): ");
    scanf("%f",&masa);

    printf("\n\t Dame tu estatura (m): ");
    scanf("%f",&estatura);

    //Linealización de la formula del imc 
    imc=(masa)/(estatura*estatura);

    printf("\n\t Tu indice de masa corporal es: %.3f",imc);

    printf("\n\n");
    return 0;
}