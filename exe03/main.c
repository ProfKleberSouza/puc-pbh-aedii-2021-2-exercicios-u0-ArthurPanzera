#include <stdio.h>

int main() {

   int num;
   scanf("%d", &num);

  if (num == 0){
    printf("NUMERO NEUTRO");
  }else{
    
    if(num%2 == 0){
      printf("NUMERO PAR");

      if(num < 0){
        printf(" NEGATIVO\n");
      }else{
        printf(" POSITIVO\n");
      }
    }else{
      printf("NUMERO IMPAR");

      if(num < 0){
        printf(" NEGATIVO\n");
      }else{
        printf(" POSITIVO\n");

    }
  }
  }

   
   return 0;
}