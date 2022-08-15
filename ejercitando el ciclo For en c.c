#include <stdio.h>

int main() {
	//ejercicio Ciclo For
	//Ciclo For
	//imprimir los primeros 10 numeros de 3 en 3
	int valMaximo = 10, valMinimo = 0;
	
	printf("\nIncrementos de 3 en 3\n");
	for(int iterador = 1; iterador <= valMaximo; iterador+=3){
		printf("\nEl valor de iterador es %d", iterador);
	}
		
	printf("\n \nDecrementos de 3 en 3\n");
	for(int iterador = 20; iterador > valMinimo; iterador-=3){
		printf("\nEl valor de iterador es %d", iterador);
	}

	return 0;
}

