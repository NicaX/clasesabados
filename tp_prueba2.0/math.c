#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingresarNumero (float* numero)
{

    printf("ingrese un numero: ");
    fflush(stdin);
    scanf("%f",numero);//no nesecita & por que ya le paso la direccion de memoria con el puntero

}
int division(float numero1, float numero2, float resultadoDivision)
{
    int retorno =-1;

    if(numero2 !=0)
    {

        resultadoDivision=numero1/numero2;
        printf("el resultado de %2.f / %2.f es: %.2f \n",numero1,numero2,resultadoDivision);
        retorno=0;

    }
    else
    {
        printf("ERRROR!! no se puede dividir por 0!\n");
    }


    return retorno;
}
float suma(float numero1, float numero2, float resultadoSuma)
{
    resultadoSuma=numero1+numero2;

    printf("el resultado de %2.f +%2.f es: %.2f \n ",numero1,numero2,resultadoSuma);

    return resultadoSuma;
}
float resta(float numero1, float numero2, float resultadoResta)
{
    resultadoResta=numero1-numero2;

    printf("el resultado de %2.f -%2.f es: %.2f \n ",numero1,numero2,resultadoResta);

    return resultadoResta;
}
float multiplicacion(float numero1, float numero2, float resultadoMultiplicacion)
{
    resultadoMultiplicacion=numero1*numero2;

    printf("el resultado de %2.f *%2.f es: %.2f \n ",numero1,numero2,resultadoMultiplicacion);

    return resultadoMultiplicacion;
}

long long int factorial(float num, long long int resultado)
{
    long long int retorno = -1;
    if(num >= 0)
    {
        retorno = 0;
        long long int resultadoFactorial=1;
        int i;

        for(i=(int)num; i>=1; i--)
        {
            resultadoFactorial= resultadoFactorial*i;
        }
        printf("el factorial de %2.f es: %I64d  \n ",num,resultadoFactorial);
        resultado = resultadoFactorial;
    }
    else
    {
        printf("No existe el factorial de numeros con decimales\n");
    }
    return retorno;
}


