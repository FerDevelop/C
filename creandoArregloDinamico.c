#include <stdio.h>
//aprender a introducir valores a un arreglo de forma dinamica
int main() {
	int numberElements;
	printf("que tan grande queres el arreglo?\n");
	scanf("%d", &numberElements);
	//creacion del arreglo con la extension
	int arreglo[numberElements];
	//el usuario debe introducir los valores de los elementos
	for (int i = 0; i < numberElements; i++){
		printf("\nIntroduci el valor del arreglo  ");
		scanf("%d", &arreglo[i]);
	}
	//mostrando los elementos del arreglo
	for (int i = 0; i < numberElements; i++){
		printf("\nel valor introducido es: %d", arreglo[i]);
	}
	return 0;
}

