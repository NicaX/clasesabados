#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador=0;
    int acumulador=0;
    float promedio;
    int continuar=1;

    while(continuar)
    {


    printf("ingrese un numero:");

    scanf("%d", &numero);

    contador++;

    acumulador=acumulador+numero;

    printf("desea continuar? <1/0>:");
    scanf("%d", &continuar);

    setbuf(stdin, NULL);

    }

    promedio=(float)acumulador/contador;

    printf("la suma de los numeros: %d y el promedio es  %.2f: ",acumulador ,promedio);

    return 0;
}
