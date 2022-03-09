#include <stdio.h>

int main(){
	float a,b,c,d;
	
	printf("Ingresa los grados a convertir :");
	scanf("%f",&a);
	
	b = (a * 9/5) + 32;
	
	printf ("Los grados convertidos son: %.2f",b);
	
	
	
	return 0;
	
}
