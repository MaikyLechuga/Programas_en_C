#include <stdio.h>

int main(void) {
	float arr[13] = {3.3, 4.5, 5.0, 3.4, 4.2, 5.3, 3.2, 4.3, 5.2, 7.1, 3.3, 4.8, 5.2};
	int i;
	
	for (i=0; i<13; i++)
	{
		if (arr[i]<3.5){
			printf("Imperceptible, sin problema.\n");
		}
		if ((arr[i]>3.5)&&(arr[i]<5.4)){
			printf("Sin problemas, avisar.\n");
		}
		if ((arr[i]>5.5)&&(arr[i]<6)){
			printf("Emitir alerta, desalojar.\n");
		}
		if ((arr[i]>6.1)&&(arr[i]<6.9)){
			printf("Emitir alerta, enviar equipos de apoyo.\n");
		}
		if ((arr[i]>7)&&(arr[i]<7.9)){
			printf("Emitir alerta, enviar equipos de rescate.\n");
		}
		if (arr[i] > 8){
			printf("Emergencia nacional, solicitar apoyo externo.\n");
		}
	}
	return 0;
}