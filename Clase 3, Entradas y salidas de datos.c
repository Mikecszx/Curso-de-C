#include <stdio.h>

int main (){


	char g[20];
	printf("Ingresa tu nombre:\n ");
	scanf ("%s",g);
	
	/*scanf solo lee hasta donde vea un espacio y despues no lo toma
	en cambio gets lee completo solo poniendo el nombre de la variable sin ampersand*/
	
	//gets(g);
	//scanf("%s",g);
	printf("Hola %s mucho gusto",g);
	
	
	return 0;
}
