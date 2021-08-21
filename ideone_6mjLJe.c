#include <stdio.h>

int main(void){
	
	float calif[30]={12,22,11,14,28,12,21,62,18,22,20,22,24,21,26,22,20,19,18,16,25,20,22,21,19,20,22,24,21,26,19};
	float sum, prom, var, des;
	int i=0, j=0;
	
	printf("Cálculo de la varianza y la desviacion estándar...\n");
	
	for(i = 0; i < 30; i++){
		sum=sum+calif[i];
		prom=sum/30;
	}
	j=i;
	for(j = 0; j < 30; j++){
		var+=pow(calif[j]-prom, 2);
	}
	
	des=pow(var/30, .5);
	
	printf("La varianza de las calidicaiones es: %.2f\n", var/30);
	printf("La desviación estándar es: %.2f", des);
	return 0;
}