### Funciones

Una función en el lenguaje C es un subprograma que podemos mandar a llamar varias veces aunque sólo se define una vez.

En los códigs fuente en C debemos como buena práctica escribir las funciones 3 veces:

1. Cuando se declaran (prototipo)
2. Cuando se mandan a llamar (invocación o llamada)
3. Cuando se definen (definción)

### *Ejemplo:*
```c
#include<stdio.h>

//Prototipo:
void saludar();

int main(){

    //Llamada de la función:
    saludar();

    return 0;
}

//Definición:
void saludar(){
    printf("\n\t Hola a todos desde una funci%cn en C",162);
}

```