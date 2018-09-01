#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    do
    {
        printf("(1) suma \n");
        printf("(2) resta \n");
        printf("(3) multiplicacion \n");
        printf("(4) division \n");
        printf("(5) factorial \n");
        printf("(6) salir \n");
        __fpurge(stdin);
        printf("elija una opcion:" );
        scanf("%d", &opcion);

        switch(opcion)
        {

        case 1:
            printf("suma dos numeros\n");
            break;
        case 2:
            printf("resta 2 numeros \n");
            break;
        case 3:
            printf("multiplica 2 numeros \n");
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



    } while(opcion!=6);

    return 0;
}
