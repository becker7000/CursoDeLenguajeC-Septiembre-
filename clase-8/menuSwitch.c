#include<stdio.h>
#include<stdlib.h>

// Prototipo de la función:
int filtro(int max);
void menu();
int numero();
void sumar();

int main(){

    int opcion; // Selector 
    opcion = filtro(5); // El filtro incluye el menú

    // Nota: como ya filtramos la opción 
    // para que sea un número entero entre 1 y 5
    // entonces, ya no es necesario un default en el switch

    switch(opcion){
        case 1:
            sumar(); // Las funciones puede llevar como nombre un verbo
            break;
        case 2:
            printf("\n\t Soy la segunda opci%cn",162);
            break;
        case 3:
            printf("\n\t Soy la tercera opci%cn",162);
            break;
        case 4:
            printf("\n\t Soy la cuarta opci%cn",162);
            break;
        case 5:
            Sleep(2000);
            printf("\n\t Saliendo...");
            Sleep(2000);
            printf("\n\t Nos vemos pronto...");
            Sleep(2000);
            printf("\n\t Fin del programa...");
            exit(0);
            break;    
    }

    // printf("\n\t La opci%cn es valida",162);
    // printf("\n\t Opci%cn: %d",162,opcion);
    
    printf("\n\n");
    return 0;
}

int filtro(int max){

    int op; // Variable local (dentro de la función filtro)
    menu(); // Se imprime el menú
    printf("\n\t Opci%cn===> ",162);
    scanf("%d",&op);

    if(op<1 || op>max){ // Filtro 
        printf("\n\t Opci%cn no valida",162);
        printf("\n\t Da click para volver a intentar...");
        getch(); //Nos ayuda a pausar el programa
        system("cls"); // Limpia la pantalla de la consola
        return filtro(max); // Reinicia la función main()
    }
    return op;
}

void menu(){
    printf("\n\t +------ Men%c -------+",163);
    printf("\n\t | 1) Sumar           |",162);
    printf("\n\t | 2) Segunda opci%cn |",162);
    printf("\n\t | 3) Tercera opci%cn |",162);
    printf("\n\t | 4) Cuarta opci%cn  |",162);
    printf("\n\t | 5) Salir           |",162);
    printf("\n\t +-------------------+");
}

//Esta función será encargada de asignar valores.
int numero(){
    int x; // Esta variable local dentro de numero
    printf("\n\t Dame un valor: ");
    scanf("%d",&x);
    return x;
}

void sumar(){
    int x,y; // Variables locales dentro de sumar
    x=numero();
    y=numero();
    printf("\n\t La suma es: %d",(x+y));
}


