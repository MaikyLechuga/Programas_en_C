#include <stdio.h>

int main(void){
	printf("Calculo del volumen de un cubo: \n");
	
	int l;
	float v;
	
	printf("Dame el valor de un lado del cubo: \n");
	scanf("%d",&l);
	
	printf("El volumen del cubo, es: %f",v);
	v=l^3;
	
	return 0;
}