#include <stdio.h>
//constantes definidas previo al proceso de compilacion
#define RENGLON 2
#define COLUM 3
//arreglo de multiples dimensiones (matrices)
int main() {
	//paso 1, definir constantes para el tamanio de la matriz
	//const int RENGLON = 2;
	//const int COLUM = 3;
	//definir una matriz
	int matriz[RENGLON][COLUM];
	//ahora a completar el array multidimensional de forma manual
	matriz[0][0]= 100;
	matriz[0][1]= 200;
	matriz[0][2]= 300;
	matriz[1][0]= 400;
	matriz[1][1]= 500;
	matriz[1][2]= 600;
	//ver los valores de la matriz
	printf("elemento renglon 0 y columna 2 = %d\n" ,matriz[0][2]);
	printf("elemento renglon 0 y columna 0 = %d\n" ,matriz[0][0]);
	
	//sintaxis simplificada de array multi-dimensional (matriz)
	int matriz2[RENGLON][COLUM]= 
	{
		{100, 200, 300}, //primer renglon
		{400, 500, 600} //segundo renglon
	};
	printf("elemento renglon 0 y columna 1 = %d\n" ,matriz2[0][1]);
	printf("elemento renglon 1 y columna 1 = %d\n" ,matriz2[1][1]);
	return 0;
}

