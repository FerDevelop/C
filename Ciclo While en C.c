#include <stdio.h>
#include <stdbool.h>
int main() {
	//Ciclo While en C (mientras)
	//Definir variables a usa
	int contador = 0, repeticiones = 10;
	
	//sintaxis del Ciclo While
	while (contador < repeticiones){
		printf("\nEl contador contador en esta iteracion es: %d\n", contador);			
		bool condicion = contador < repeticiones;		
		printf("Evaluacion %d < %d valor de la condicion %d\n", contador, repeticiones, condicion);
		//aca se imprime el valor de la condicion por cada ciclo
		//cada vez que se imprime 1 la condicion es verdadera
		//cuando se imprima 0 la condicion es falsa y finaliza el ciclo
		contador++;	//aca se incrementa en la proxima iteracion o ciclo
	}
	printf("\nFuera del ciclo while finalizado");
	return 0;
}

