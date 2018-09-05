#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include "math.h"

int main()
{
    int opcion;
    int flagA=0;
    int flagB=0;
    int flagCalculos=0;
    float numeroUno;
    float numeroDos;
    float resultadoResta;
    float resultadoSuma;
    float resultadoMultiplicacion;
    float resultadoDivision;
    long long int resultadoFactorial;


    do
    {
        printf("=============================\n");
        printf("Bienvenidos a la calculadora!\n");
        printf("=============================\n");

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

                    resultadoDivision=division(numeroUno, numeroDos, resultadoDivision);

                    resultadoSuma=suma(numeroUno,numeroDos,resultadoSuma);

                    resultadoResta=resta(numeroUno,numeroDos,resultadoResta);

                    resultadoMultiplicacion=multiplicacion(numeroUno,numeroDos,resultadoMultiplicacion);

                    resultadoFactorial=factorial(numeroUno, resultadoFactorial);

                    resultadoFactorial=factorial(numeroDos, resultadoFactorial);

                }
                else
                {
                    printf("ERROR!!! Ingrese dos numeros por favor!\n");
                }

            }
            else
            {
                printf("ERROR!!! No se pueden ver los los resultados sin antes calcularlos\n");
            }

            break;
        case 5:
            break;
        default:
            printf("ingrese una opcion valida \n");

        }

        fflush(stdin);
        system("pause");
        system("cls");
    }
    while(opcion!=5);
    printf("=================================\n");
    printf("Gracias por usar la calculadora!!\n");
    printf("=================================\n");



    return 0;
}
