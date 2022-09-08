#include<stdio.h>

int main(){
    
    int a,b;

    for(a=1;a<=10;a++){

        printf("\n\t +--------+");
        for(b=1;b<=10;b++){ // 100 veces
            printf("\n\t %d * %d = %d",a,b,(a*b));
        }

    }

    printf("\n\n");
    return 0;
}
