#include <stdio.h>

//definire algunas variables

int main() {
	//1. declaro una variable
	int miNumero;
	//2. lo inicializo
	miNumero = 20;
	//3. imprimir la variable
	//Formato(printf) de impresion %d(decimal) para imprimir numeros
	//Formato(printf) de impresion %c(char)	para imprimir caracteres
	// dentro de la cadena de texto	se coloca la referencia para la variable con %
	printf("mi numero es: %d ", miNumero); 
	// printf("mi %d numero es: ", miNumero); // otra ubicacion de %d se llama placeholder
	return 0;
}

