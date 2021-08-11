#include <stdio.h>

int main()
{
    int  V, R;
    float T, D, L;

    
    scanf("%f", &T);

    
    scanf("%d", &V);

    
    scanf("%d", &R);

    D = T * V;
    L = D/R;

    printf("\n");

    printf("R = %d\n", R);
    printf("V = %d\n", V);
    printf("T = %.2f\n", T);
    printf("D = %.2f\n", D);
    printf("L = %.2f\n", L);
    return 0;
}