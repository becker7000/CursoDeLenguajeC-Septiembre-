## Bucles

Los bucles o ciclos en el lenguaje C son estructuras de control de tipo repetitivas, cada repetición en un bucle se conoce como iteración, comúnmente los ciclos cuentan con 3 elementos. 

1. Variable de control
2. Condición de iteración
3. Incremento o decremento

## While

Usamos el ciclo while cuando la condición es compleja o simplemente sabemos que tenemos que iterar un bloque de código pero no sabemos cuando va a parar.

*Sintáxis:*
```c
    int i=1; //Variable de control

    while(i<=10){ // Condición
        printf("\n\t Hola");
        i++;
        //i+=1; //i=i+1; Incremento
    }

```
---
*El operador de incremento tiene dos modos, un inmediato (pre-incremento) y uno lento (post-incremento), es decir, si usamos el operador ++ como prefijo tenemos un incremento inmediato en cambio si usamos el operdor ++ como sufijo funciona como post-incremento.*

---

### Nota: debemos tener cuidado de algunos apectos:

1. El ciclo deber ser finito
2. La condición de ciclo debe cumplirse al menos vez
3. Debemos saber cuando es conveniente usar: while, for, do-while o incluso recursividad.