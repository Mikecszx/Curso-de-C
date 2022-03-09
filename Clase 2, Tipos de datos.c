#include  <stdio.h>

int main (){
	char a = 'e';   //tipo caracter o tipo cualquiera,/ char almacena 1Byte de tamaño y va desde 0 a 255
	short b = -15; //tiene 2 Bytes de tamaño y el rango va desde -128 hasta 127
	int c = 1024; //tiene 2 Bytes de tamaño y va desde -32768 hasta 32767
	unsigned int d = 128; //solo puede ser positivo y tiene 2 Bytes de memoria y va desde 0 hasta 65535 
	long e = 12345; //tiene un tamaño de 4 Bytes  y es muy largo literal
	float f = 3.1416; //tiene un tamaño de 4 bytes y va desde 3.4 elevado a la 10
	double g = 123456789; //tiene un tamaño de 8 Bytes y va desde 1.7 elevado a la 10
	
	
	
	printf ("El elemento es: %.lf",g);
	/*
	para imprimir un entero se pone "%i" 
	para double se pone "%.lf" si ponemos el punto eliminara los numeros despues del punto y si lo quitamos pondra los numeros despues del punto
	para un flotante es "%f y si solo quieres unos numeros especificos usamos el "%.Xf, siendo x el numero de decimales requeridos" 
	para caracter "%c" debido a que no existe string se usa char como cadena y se usa asi "%s"
	para short ponemos un entero "%i"
	para unsigned ponemos como entero "%i"
	para long ponemos "%li"
	
	
	*/
	
	return 0;
}
