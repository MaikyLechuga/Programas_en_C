#include<stdio.h>
#include<stdlib.h>
int main(){
	int n1,sis,i,j,n,b[100];
	char cadena[63];
	unsigned long long int decimal = 0;
 printf("¿En que sistema desea convertirlo?\n 1)Binario\n 2)Hexadecimal\n 3)Octal\n");
 scanf("%d",&sis);
 switch(sis){
 	case 1:
 		 printf("Indique un numero decimal:");
         scanf("%d",&n1);
 		n=n1;
 		i=0;
 		while(n>0){
 			b[i]=n % 2;
 			n /=2;
 			++i;
		 }
		 for(j=i-1;j>=0;--j)
		 printf("%d",b[j]);
		 printf("\n");
 		break;
 		
 	case 2: 
         printf("Ingresa un numero decimal:\n");
         scanf("%llu", &decimal);
         ltoa(decimal, cadena, 16);
         printf("El numero en hexadecimal es: %s\n", cadena);
		 break;
 	case 3:
 		 printf("Indique un numero decimal:");
         scanf("%d",&n1);
 			n=n1;
 		i=0;
 		while(n>0){
 			b[i]=n % 8;
 			n /=8;
 			++i;
		 }
		 for(j=i-1;j>=0;--j)
		 printf("%d",b[j]);
		 printf("\n");	
 		break;
 		default:
 		printf("Opcion no reconocida.");
 }	
 return 0;
}