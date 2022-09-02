#include<stdio.h>

int main(){

    int valor;

    printf("\n\t Dame un numero entero: ");
    scanf("%d",&valor);

    if(valor>0)
        printf("\n\t El valor es positivo");

    if(valor<0)
        printf("\n\t El valor es negativo");    

    if(valor==0)
        printf("\n\t El valor es exactamente cero");    

    printf("\n\n");
    return 0;
}