#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>

void ingresarNumero (float* numero)
{
printf("ingrese un numero: ");
__fpurge(stdin);
scanf("%f",numero);//no nesecita & por que ya le paso la direccion de memoria con el puntero


}
