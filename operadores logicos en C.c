#include <stdio.h>
#include <stdbool.h>
int main() {
	//Recordar observar la TABLA DE VERDAD
	
	//OPERADORES LOGICOS 
	bool a = true; //verdadero
	bool b = false; // falso	
	printf("El valor de a es: %d", a);
	printf("\nEl valor de b es: %d", b);	
	
	//OPERADOR LOGICO && (AND - Y)
	//regresa verdadero si ambos operadores son verdaderos
	bool c = a && b;
	printf("\nEl valor de c es: %d", c);
	
	return 0;
}

