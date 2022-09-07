#include<stdio.h>

int main(){

    int a=5,b;
    b=++a; // Esto incrementa primero el valor de a paso 1
    // y después ese valor lo guarda también en b...

    printf("\n\t a = %d y b = %d",a,b); // a=6 y b=6
    printf("\n\t a = %d",a++); //a=7
    //printf("\n\t a intermedia: %d",a);
    printf("\n\t a = %d",++a); //a=8

    printf("\n\n");
    return 0;
}