#include <stdio.h>

int main()
{
    int a, b, c, d, menor, maior;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b){
        if(a < c)
            menor = a;
        else
            menor = c;
    }

    else{
        if(b < c)
            menor = b;
        else
            menor = c;
    }

    if(a > b){
        if(a > c)
            maior = a;
        else
            maior = c;
    }

    else{
        if (b > c)
            maior = b;
        else
            maior = c;
    }

    printf("\n");
    printf("MENOR = %d", menor);
    printf("\n");
    printf("MAIOR = %d", maior);
        return 0;
}