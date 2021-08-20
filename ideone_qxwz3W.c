#include <stdio.h>

int main(void) {
	int a,b,c,sum,dif,mul;
	printf("Indica el valor del primer número: \n");
	scanf("%d", &a);
	printf("Indica el valor del segundo número: \n");
	scanf("%d", &b);
	sum=a+b;
	printf("\nLa suma de los dos números es: %d", sum);
	dif=a-b;
	printf("\nLa resta de los dos números es: %d", dif);
	mul=a*b;
	printf("\nLa multiplicación de los dos números es: %d", mul);
	return 0;
}
