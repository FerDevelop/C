#include <stdio.h>

//definire algunas variables

int main() {
	//1. declarar e iniciar varias variables (separadas por comas
	int miNumero1 = 20 ,miNumero2 = 30, miNumero3 = 7;
	
	//2. imprimir el valor de las variables
	
	//Formato(printf) de impresion %d(decimal) para imprimir numeros
	//Formato(printf) de impresion %c(char)	para imprimir caracteres
	// dentro de la cadena de texto	se coloca la referencia para la variable con %
	printf("mi miNumero1 es: %d y miNumero2 es: %d \n", miNumero1, miNumero2); 
	//alt 92 y n (salto de linea)
	printf("mi miNumero3 es: %d ", miNumero3);
	// printf("mi %d numero es: ", miNumero); 
	// otra ubicacion de %d se llama placeholder
	// se imprimen en el mismo orden que se ubican las variables al final de la linea
	return 0;
}

