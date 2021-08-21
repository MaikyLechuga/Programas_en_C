#include <stdio.h>

int main(void) {
	int a,b,c,div,pot;
	printf("Indica el valor del primer número: \n");
	scanf("%d", &a);
	printf("Indica el valor del segundo número: \n");
	scanf("%d", &b);
	div=a/b;
	printf("\nEl resultado de a/b es: %d", div);
	pot=a^b;
	printf("\nEl resultado del valor de a elevado al valor de b es: %d", pot);
	return 0;
}