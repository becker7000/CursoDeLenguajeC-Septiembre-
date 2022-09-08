#include<stdio.h>
//Factorial: 4! = 4*3*2*1 = 24

int main(){

    int natural,factorial=1, i; // Las multiplicaciones inician en 1
    printf("\n\t Dame un numero natural: ");
    scanf("%d",&natural); //Entre 1 y 16 
    // Tarea: hacer un filtro para numeros entre 1 y 16.

    for(i=natural;i>0;i--){ // Condición y decremento
        factorial*=i;
    }

    printf("\n\t %d! = %d",natural,factorial);    

    printf("\n\n");
    return 0;
}