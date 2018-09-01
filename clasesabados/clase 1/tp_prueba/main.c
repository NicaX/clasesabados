#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>//no funciona en windows
#include <string.h>
#include "math.h"

int main()
{
    int opcion;
    int flagA=0;
    int flagB=0;
    float numeroUno;
    float numeroDos;
    float resultadoResta;
    float resultadoSuma;

    do
    {
        if(flagA==1 )
        {
        printf("(1)Ingresar 1er operando (A)=%2.f\n",numeroUno);
        }
        else
        {
         printf("(1)Ingresar 1er operando (A)\n");
        }
        if(flagB==1 )
        {
        printf("(2)Ingresar 2do operando (B)=%2.f\n ",numeroDos);
        }
        else
        {
         printf("(2)Ingresar 2do operando (B)\n");
        }
        printf("(3) calcular las operaciones \n");
        printf("(4) resultados \n");
        printf("(5) salir\n");
        __fpurge(stdin);
        printf("elija una opcion:" );
        scanf("%d", &opcion);

        switch(opcion)
        {

        case 1:
            ingresarNumero(&numeroUno);
            flagA=1;
            break;
        case 2:
            ingresarNumero(&numeroDos);
            flagB=1;
            break;
        case 3:
            if(flagA==1 && flagB==1)
            {
            printf("multiplica 2 numeros \n");            }
            else
            {
            printf("error ingrese los numeros");            }
            break;
        case 4:
            printf("divide 2 numeros\n");
            break;
        case 5:
            printf("factorial de dos numeros \n");
            break;
        case 6:
        break;
        default:
            printf("ingrese una opcion valida \n");

        }

        __fpurge(stdin);
        printf("\nIngrese ENTER para continuar...");
        getchar();
      //system("pause");
       system("clear");



    } while(opcion!=5);

    return 0;
}
