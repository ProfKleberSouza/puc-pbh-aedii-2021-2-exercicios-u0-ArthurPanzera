#include <stdio.h>

int main()
{

    int numero;

    do{

        scanf("\n%d", &numero);

        if (numero > 0){
            printf("\nPOSITIVO");
        }

        if (numero < 0){
            printf("\nNEGATIVO");
        }

    }while(numero!=0);





    return 0;
}