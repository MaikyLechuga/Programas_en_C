#include <stdio.h>
#include <math.h>

int main(void) {
	/*SE ALMACENAN LOS DATOS EN UN ARREGLO*/
	int arr[30]={20,19,18,16,19,20,22,21,19,20,22,24,21,26,22,20,19,18,16,19,20,22,21,19,20,22,24,21,26,2,19};
	/*SE DEFINEN LAS VARIABLES QUE SERÁN UTILIZADAS: i: es un contador, sum: la suma de todos los datos, prom: la media*/
	int i, sum;
	float prom;
	/*SE INICIALIZA LA VARIABLE QUE ACUMULARÁ LA SUMA DE LOS VALORES*/
	sum=0;
	for (i=0; i<30; i++) /*SE INDICA VALOR INICIAL, VALOR MÁXIMO DEL CICLO, INCREMENTO*/
	{
		sum=sum+arr[i]; /*SOLO ES UNA INSTRUCCIÓN, PUEDEN NO COLOCARSE LAS LLAVES*/
	}
	prom=sum/30.00; /*OPERACIÓN QUE CALCULA LA MEDIA*/
	printf("El valor de la media es =%1.2f",prom); /*EL 1.2 INDICA LA PARTE ENTERA Y DOS DECIMALES*/
	return 0;
}

