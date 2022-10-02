#include <stdio.h>

int main() {
	
	//iteracion de arreglos con el ciclo for
	int largo = 10;
	
	int arreglo [largo];
	
	arreglo [0] = 78;
	arreglo [2] = 56;
	arreglo [3] = 69;
	arreglo [5] = 20;
	arreglo [7] = 3;
	arreglo [8] = 14;
	
	
	//ahora a imprimir valores con el ciclo for
	
	for (int i = 0; i <= largo -1; i++ )
	{printf("\niteracion n° %d, indice %d, valor es [%d]", i + 1, i ,  arreglo[i]);};
	
	
	return 0;
}

