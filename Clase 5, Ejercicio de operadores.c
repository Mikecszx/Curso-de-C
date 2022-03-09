#include <stdio.h>

int main(){
	int a,b,c,d,e,f;
	
	printf("Ingresa dos numeros :");
	scanf("%i %i",&a,&b);		//De esta forma podemos hacer que el scanf pueda leer mas datos en vez de usar dos o mas scanf
					
	
	c = a + b;
	printf("El resultado sumado es: %i \n",c);
	
	d = a - b;
	printf("El resultado restado es : %i \n",d);
	
	e = a * b;
	printf("El resultado multiplicado es: %i \n",e);
	
	f = a / b;
	printf("El resultado dividido es: %i \n",f);
	
	
	return 0;
	
}
