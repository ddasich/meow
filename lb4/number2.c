#include <stdio.h>

int main() {

	int a, i, n;
	printf("Введите количество строк: " );

	scanf("%d",&a);

	for (i = 0; i < a; i++) { 
		for (n = a-i; n > 0 ; n--) {
			printf("%d",i+1);
		}

		printf("\n");

	}
	return 0;
}	