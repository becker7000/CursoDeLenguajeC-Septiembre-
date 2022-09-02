#include<stdio.h>

int main(){

    int edad;
    printf("\n\t Dame edad: ");
    scanf("%d",&edad);

    // %s es código de formato para las cadenas:
    printf("\n\t Mensaje: %s",(edad>=18)?
     "Eres mayor de edad" : "Eres menor de edad");

    printf("\n\n");
    return 0;
}

/*
    Hacer un programa que con el operador ternario
    se imprima si un númera dado por el usuario es par o impar.
*/
