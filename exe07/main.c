#include <stdio.h>

int main()
{
    int N, NUM, maior = 0, menor = 0 , soma;

    scanf("%d", &N);

    printf("\n");

    for(int i = 0;i < N;i ++){

        scanf("%d", &NUM);

        if(NUM > maior)
            maior = NUM;

        if (NUM < menor)
            menor = NUM;
    }

    printf("\nMENOR = %d", menor);
    printf("\nMAIOR = %d", maior);


    return 0;
}
