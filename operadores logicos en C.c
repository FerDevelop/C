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
	printf("\nEl valor de c en operador AND es: %d", c);
		
	//OPERADOR LOGICO ||(OR)
	c = a || b;
	//regresa verdadero si alguno de los 2 operandos sea verdadero o (1)
	//solo si ambos son falsos entonces el valor es falso o (0)
	printf("\nEl valor de c en el operador OR es: %d", c);
	
	//OPERADOR LOGICO NOT (OPERADOR NO)
	//INVIERTE EL VALOR ORIGINAL(CONVIERTE EL VALOR DE 0 A 1 Y VICEVERSA)
	c = !a; //a fue declarado en un inicio como TRUE entonces el resultado sera 0(false)
	printf("\nEl valor de c en el operador NOT es: %d", c);
	
	return 0;
}

