#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
	int n,i,num;
	char FIN;
	
	do
	{
		printf("\n Indica el numero :");
		scanf("%d",&n);
		num=1;
		for(i=1;i<=n;i++)
		num=num*i;
		printf("\n El factorial es : %d", num);
		printf("\n\n\n ¿Quieres continuar?, Escribe S/N\n");
		scanf("%s",&FIN);
	}while (FIN=='S'||FIN=='s');
return 0;
}