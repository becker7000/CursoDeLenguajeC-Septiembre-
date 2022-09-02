#include<stdio.h>

int main(){

    // Nota: siempre que trabajamos 
    // con una variable que va a
    // guardar una suma la inicializamos en 0.
    int ahorro=0;

    ahorro+=100; // ahorro = ahorro + 100;
    ahorro+=200;
    ahorro+=250;
    ahorro+=50;
    ahorro*=2;

    printf("\n\t Ahorro final: %d",ahorro);

    printf("\n\n");
    return 0;
}
