#include <stdio.h>

int main()
{
  int n, num, maior = 0, menor = 0;

  scanf("%d", &n);

  for(int i=1;i<=n;i++){
    scanf("%d", &num);

    if (i == 1){
      maior = num;
      menor = num;
    }else{
      if (num > maior){
        maior = num;
      }else{
        if (num < menor){
          menor = num;
        }
      }
    }

  }

  printf("\nMENOR = %d", menor);
  printf("\nMAIOR = %d", maior);

    return 0;
}
