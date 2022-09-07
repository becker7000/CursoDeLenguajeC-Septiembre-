#include<stdio.h>
#include<math.h> // La agregamos para que sea recocida pow

int main(){

    int i=1; // Variable de control

    while (i<=10){ // Condición
        printf("\n\t %d%c = %d",i,253,(int)pow(i,2));
        i++; // Incremento
    }
    
    //Casting de datos: transformar de tipo de dato otro.

    printf("\n\n");
    return 0;
}