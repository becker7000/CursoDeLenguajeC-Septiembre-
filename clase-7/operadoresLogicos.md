### Operadores lógicos

Los operadores lógicos nos devuelven un valor booleano al aplicarlos (verdadero o falso), en el caso del lenguaje C, se devuelve un 0 o un 1.

Los operadores más comunes en C son,and, or y not.

---

1. Operador AND (&&): es un operador binario (ejemplo: x&&y) y además en infijo (que va en medio).
Devuelve un verdadero si ambas expresiones son verdaderas de lo contrario devuelve falso.

*Tabla de verdad:*

    | x | y | x&&y |
    |---|---|------|
    | V | V |  V   |
    | V | F |  F   |
    | F | V |  F   |
    | F | F |  F   |

2. Operador OR (||):  es un operador binario (ejemplo: x||y) y además en infijo (que va en medio). Devuelve verdadero si por lo menos una de sus expresiones es verdadera.

*Tabla de verdad:*

    | x | y | x||y |
    |---|---|------|
    | V | V |  V   |
    | V | F |  V   |
    | F | V |  V   |
    | F | F |  F   |

3. Operador OR: es un operador unario (una sola expresion) y es prefijo (que va antes). Devuelve un verdadero si la expresión es falsa y viceversa.

*Tabla de verdad:*

    | x |  !x  |
    |---|------|
    | V |  F   |
    | F |  V   |
   



