#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
#include<time.h>

int main(){

    srand(time(NULL)); // Esto ayuda a generar un aleatorio diferente con cada ejecución

    int moneda;
    moneda=rand()%2; // 2341%2 = 0 o 1
    //printf("\n\t Moneda: %d",moneda);

    if(moneda==0)
        printf("\n\t SOOOOOOOOL!");
    else
        printf("\n\t AGUIIIILA!");   

    //printf("\n\t Tiempo: %d",time(NULL));

    printf("\n\n");
    return 0;
}

/**
 * En la computación no exite forma de crear un valor aleatorio
 * realmente, lo que se usa son algoritmos que generan valores 
 * pseudo-aleatorios.
 * 
 * La función rand() genera el mismo número aleatorio con cada 
 * ejecución pero podemos cambiar la semilla de la función para
 * que este número salga diferente con cada ejecución, eso lo 
 * logramos aplicando srand(time(NULL));
 * 
*/