#include <stdio.h>

	/*imprime la tabla Fahrenheit-Celsius
	para fahr=0,20,...,300 */

	int main (void) {
		int fahr, celsius;
		int lower, upper, step;
		
		lower=0; /*límite inferiro de la tabla de temperaturas*/
		upper=300; /*límite superior*/
		step=20 /*tamañp del incremento*/
	
		fahr=lower;
		while(fahr<=upper) {
			celsius=5*(fahr-32)/9;
			printf("%d\t%d\n",fahr,celsius);
			fahr=fahr+step
		}
		return 0;
	}