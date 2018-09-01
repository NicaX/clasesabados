#include <stdio.h>
#include "UTN_INPUT.h"
int pedirNumeroEntero(char texto[], int max, int min)
{
    int numero;
    printf("ingrese %s", texto);
    scanf("%d", &numero);

    numero=validarEntero(numero ,texto ,min , max);

    return numero;
}

float pedirNumeroFlotante(char texto[])
{
	float numeroFlotante;
	printf("%s", texto);
	scanf("%f", &numeroFlotante);

	return numeroFlotante;
}

char pedirCaracter(char texto[])
{
	char caracter;

	printf("%s", texto);
	fflush(stdin);
	scanf("%c", &caracter);

	return caracter;
}
int validarEntero(int numero ,char texto [], int min , int max)
{
     while(numero<min || numero>max)
    {
        printf("reingrese%s", texto);
        scanf("%d", &numero);

        //return numero;
    }
     return numero;
}







