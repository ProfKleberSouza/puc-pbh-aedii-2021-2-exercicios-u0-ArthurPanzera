#include <stdio.h>

int main (){
	int i, n = 10;
	int num [10];

	for ( i = 0; i < n; i++){
		scanf("%d", &num [i] );
	}

	printf("\n");

	for ( i = n - 1; i >= 0; i--){
        printf("\n%d ", num [i]);
	}

	return 0;
}