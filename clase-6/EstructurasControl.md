
### Estructuras de control

| Existen dos tipos de sentencias:

1. Sentencias simples:
```c
printf("\n\t Esta es una sentencia simple");
```

2. Sentencias compuestas:
```c
    int x=10;
    int y=20;
    { //Esto es una sentencia compuesta:
        int z=x+y;
        x+=1;
        printf("\n\t x = %d y z = %d",x,z);
    }
```

Así entonces, podemos concluir dos caracteristicas de las estructuras de control: 

* Si nosotros tenemos una sentencia simple dentro de una estructura de control podemos escribirla sin usar: { }, ejemplo:

```c
    if(edad>=18)
        printf("\n\t Eres mayor de edad");
```

* Si nosotros tenemos una sentencia compuesta dentro de una estructura de control debemos usar: { }, ejemplo:

```c
    if(edad>=18){
        printf("\n\t Adelante, puedes acceder...");
        printf("\n\t Bienvenid@ %s",nombre);
        iniciar();
    }
```

### Nota: Esto no solamente funciona con if como en los ejemplos, sino que también es válido para: while, do-while,for,if-else y if-else-if.
