#include<stdio.h>

int main(){

    float monto_sin_IVA, monto_con_IVA;

    printf("\n\t Dame un monto sin IVA: $");
    scanf("%f",&monto_sin_IVA);

    monto_con_IVA = monto_sin_IVA*1.16;
    printf("\n\t El monto con IVA es: $%.2f",monto_con_IVA);

    printf("\n\n");
    return 0;
}