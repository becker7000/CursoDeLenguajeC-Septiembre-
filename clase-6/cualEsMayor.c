#include<stdio.h>

int main(){

    system("color a1");
    
    int a, b;
    printf("\n\t Escribe dos numero enteros: ");
    scanf("%d %d",&a,&b);

    if(a>b){ //Sentencia compuesta
        printf("\n\t El mayor es: %d",a);
        printf("\n\t El menor es: %d",b);
    }

    if(b>a){ //Sentencia compuesta
        printf("\n\t El mayor es: %d",b);
        printf("\n\t El menor es: %d",a);
    }

    printf("\n\n");
    return 0;
}

