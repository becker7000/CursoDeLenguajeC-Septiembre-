#include<stdio.h>

int main(){

    int segundos=350;
    
    // %d es el código de formato para los enteros(int)
    // %i es un equivalente
    printf("\n\t %d segundos equivalen a: ",segundos);

    int minutos=segundos/60; // minutos=3
    segundos=segundos%60; // segundos=20

    printf("%d minutos con %d segundos",minutos,segundos);

    printf("\n\n");
    return 0;
}