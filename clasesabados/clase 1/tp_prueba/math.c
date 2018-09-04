#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingresarNumero (float* numero)
{
printf("ingrese un numero: ");
fflush(stdin);
scanf("%f",numero);//no nesecita & por que ya le paso la direccion de memoria con el puntero


}
int division(float numero1, float numero2, float* resultadoDivision)
{
     int retorno =-1;

    if(numero2 !=0)
    {
    *resultadoDivision=numero1/numero2;
    retorno=0;

    }

    return retorno;
}
int suma(float numero1, float numero2, float resultadoSuma)
{

    resultadoSuma=numero1+numero2;

    return (int)resultadoSuma;
}
int resta(float numero1, float numero2, float resultadoResta)
{

    resultadoResta=numero1-numero2;

    return (int)resultadoResta;
}
int multiplicacion(float numero1, float numero2, float resultadoMultiplicacion)
{

    resultadoMultiplicacion=numero1*numero2;

    return (int)resultadoMultiplicacion;
}

int factorial(float num)
{
    int resultadoFactorial=1;
    int i;

    if(num>=0)

        for(i=(int)num; i>=1; i--)
    {
        resultadoFactorial= resultadoFactorial*i;
    }
    return resultadoFactorial;



}
