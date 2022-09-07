#include<stdio.h>

int main(){

    char letra;

    printf("\n\t Dame una letra: ");
    scanf("%c",&letra);

    switch (letra){
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("\n\t Soy una vocal...");
            break;
        default:
            printf("\n\t No soy ninguna vocal...");
            break;
    }

    printf("\n\n");
    return 0;
}