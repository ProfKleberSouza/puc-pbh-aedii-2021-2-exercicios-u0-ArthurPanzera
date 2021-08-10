#include <stdio.h>

int main()
{
    float nota, n1, n2, n3, n4;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    nota = (n1 + n2 + n3 + n4)/4.0;

    printf("\n");

    if(nota >= 6){
        printf("NOTA = %.2f (APROVADO)", nota);
    }

    else{
        printf("NOTA = %.2f (REPROVADO)", nota);
    }


    return 0;
}
