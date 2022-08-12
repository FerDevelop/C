#include <stdio.h>

int main() {
	//OPERADORES DE ASIGNACION EN C.
	//Operador = para asignar un valor
	int myNumber = 20;
	printf("El valor de la variable myNumber es: %d", myNumber);
	myNumber = 10;
	printf("\nEl valor de la variable myNumber es: %d", myNumber);
	
	//OPERADOR +=
	myNumber += 5; // myNumber = myNumber + 5; esto dara como resultado 15
	printf("\nValor de myNumber es: %d", myNumber);
	
	//OPERADOR -=
	myNumber -= 1; //myNumber = myNumber + 5; (15 - 1) esto dara 14 como resultado
	printf("\nValor de myNumber es: %d", myNumber);
	
	//OPERADOR *= (multiplicacion)
	myNumber *= 2; //myNumber = myNumber * 2; (14 * 2) esto dara 28 como resultado
	printf("\nValor de myNumber es: %d", myNumber);
	
	//OPERADOR /= (division)
	myNumber /= 4; //myNumber = myNumber / 4; (28/4) esto dara 7 como resultado
	printf("\nValor de myNumber es: %d", myNumber);
	
	//OPERADOR %= (residuo de la division)
	myNumber %= 3; //myNumber = myNumber % 3; (7/3) esto dara 1 como resultado
	printf("\nValor de myNumber es: %d", myNumber);
	
	return 0;
}

