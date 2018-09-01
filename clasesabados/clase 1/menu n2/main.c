#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag;
    int opcion;
    do
    {

    printf("ingrese una opcion del menu: ");
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



    }

    }while(flag !=0);





    return 0;
}
