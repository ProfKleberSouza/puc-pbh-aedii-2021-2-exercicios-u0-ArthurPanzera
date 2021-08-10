#include <stdio.h>

int main() {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if(x + y > z && x + z > y && y + z > x){

        if(x == y && x == z)
            printf("TRIANGULO EQUILATERO");

        else

            if(x == y || x == z || y == z)
                printf("TRIANGULO ISOSCELES");

            else
                printf("TRIANGULO ESCALENO");
    }
    else
        printf("NAO FORMA UM TRIANGULO");
}