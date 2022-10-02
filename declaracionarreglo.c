#include <stdio.h>

int main() {
	//aprendiendo a declarar arreglos en C
	
	int miArreglo [5];
	
	//Modificacion de los valores en el arreglo
	
	miArreglo[0] = 10;
	miArreglo[1] = 20;
	miArreglo[2] = 2;
	miArreglo[3] = 1;
	miArreglo[4] = 8;
	
	printf("el valor del arreglo en indice [0] = %d", miArreglo[0]);
	printf("\nel valor del arreglo en indice [2] = %d", miArreglo[2]);
	printf("\nel valor del arreglo en indice [4] = %d", miArreglo[4]);
	
	return 0;
}

