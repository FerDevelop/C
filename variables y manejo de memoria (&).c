#include <stdio.h>

int main() {
	//1. Declaracion de variable
	int miNumero = 15;
	/*  (&) Esto se utiliza o significa que poniendolo adelante de la variable 
	va a indicar en memoria donde se aloja o donde esta almacenada la variable
	ejemplo: &miNumero*/ 
	printf("Este es el valor de la variable: %d ", miNumero);
	printf("\nAhora voy a utilizar pointer %p , esta es la dir en memoria", &miNumero);
	//para el pointer se utiliza %p (p minuscula)
	// & , este va colocado delante de la variable, por ejemplo: &miNumero
	return 0;
}

