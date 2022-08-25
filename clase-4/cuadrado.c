#include<stdio.h>
#include<math.h>

int main(){

    int numero;

    printf("\n\t Dame un numero: ");
    scanf("%d",&numero); //Entrada de datos

    // Hacer casting de datos es cambiar de un tipo a otro.
    printf("\n\t El cuadrado del numero es: %d",(int)pow(numero,2));

    printf("\n\n");
    return 0;
}