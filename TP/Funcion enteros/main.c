
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include"UTN_INPUT.h"


int main()
{
    //int legajo;
    float nota;
    int edad;
    char sexo;


    //int numero;
    //numero=pedirNumeroEntero;
    //printf("el numero es: %d", numero);


    //legajo=pedirNumeroEntero("ingrese un legajo: \n ",18,65);

    nota=pedirNumeroFlotante("ingrese una nota:\n ");

    edad=pedirNumeroEntero("ingrese una edad:\n ",18,65);

    sexo=pedirCaracter("ingrese su sexo:\n ");

   // printf("su numero de legajo es: %d \n", legajo);
    printf("su nota es: %f \n", nota);
    printf("su edad es: %d \n", edad);
    printf("su sexo es: %c \n", sexo);


    return 0;
}

