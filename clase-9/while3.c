#include<stdio.h>

int main(){

    int segundos;

    printf("\n\tSegundos a contar: ");
    scanf("%d",&segundos);

    while (segundos>=0){
        system("cls");
        printf("\n\n\a");
        printf("\n\t %d",segundos);
        Sleep(1000);
        segundos--;
    }

    printf("\n\t Fin de la cuenta...");
    

    printf("\n\n");
    return 0;
}