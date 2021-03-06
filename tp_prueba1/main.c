#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"

int main()
{
    int opcion;
    int flagA=0;
    int flagB=0;
    int flagCalculos=0;
    float numeroUno;
    float numeroDos;
    int resultadoResta;
    int resultadoSuma;
    int resultadoMultiplicacion;
    float resultadoDivision;
    long  long int resultadoFactorial;

    do
    {

        if(flagA==1 )
        {
            printf("(1) Ingresar 1er operando (A)=%2.f\n",numeroUno);
        }
        else
        {
            printf("(1) Ingresar 1er operando (A)\n");
        }
        if(flagB==1 )
        {
            printf("(2) Ingresar 2do operando (B)=%2.f\n",numeroDos);
        }
        else
        {
            printf("(2) Ingresar 2do operando (B)\n");
        }

        printf("(3) calcular las operaciones \n");
        printf("(4) resultados \n");
        printf("(5) salir\n");
        fflush(stdin);
        printf("\nelija una opcion:" );
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
                printf("calculando la suma: %2.f -%2.f \n",numeroUno,numeroDos);
                printf("calculando la resta: %2.f +%2.f \n",numeroUno,numeroDos);
                printf("calculando la division: %2.f /%2.f \n",numeroUno,numeroDos);
                printf("calculando la multiplicacion: %2.f *%2.f \n",numeroUno,numeroDos);
                flagCalculos=1;
            }
            else
            {
                printf("\nERROR!!!! Por favor ingrese dos numeros!\n");
            }

            break;
        case 4:
            if(flagCalculos==1)
            {
                if(flagA==1 && flagB==1)
                {
                    if (!division(numeroUno, numeroDos, &resultadoDivision))
                    {
                        printf("el resultado de %2.f / %2.f es: %.2f\n",numeroUno,numeroDos, resultadoDivision);
                    }
                    else
                    {
                        printf("ERRROR!! no se puede dividir por 0!\n");
                    }

                    resultadoSuma=suma(numeroUno,numeroDos,resultadoSuma);
                    printf("el resultado de %2.f +%2.f es: %d \n ",numeroUno,numeroDos,resultadoSuma);
                    resultadoResta=resta(numeroUno,numeroDos,resultadoResta);
                    printf("el resultado de %2.f -%2.f es: %d \n ",numeroUno,numeroDos,resultadoResta);
                    resultadoMultiplicacion=multiplicacion(numeroUno,numeroDos,resultadoMultiplicacion);
                    printf("el resultado de %2.f *%2.f es: %d \n ",numeroUno,numeroDos,resultadoMultiplicacion);
                    resultadoFactorial=factorial(numeroUno);
                    printf("el factorial de %2.f es: %I64d  \n ",numeroUno,resultadoFactorial);
                    resultadoFactorial=factorial(numeroDos);
                    printf("el factorial de %2.f es: %I64d \n ",numeroDos,resultadoFactorial);

                }
                else
                {
                    printf("ERROR!!! Ingrese dos numeros por favor!\n");
                }

            }
            else
            {
                printf("ERROR\n");
            }

            break;
        case 5:
            printf("factorial de dos numeros \n");
            break;
            default:
            printf("ingrese una opcion valida \n");
        }

        fflush(stdin);
        system("pause");
        system("cls");
    }
    while(opcion!=5);

    return 0;
}
