#include <stdio.h>
#include <stdbool.h>
int main() {
	//definicion de variables
	int minimo = 0, maximo = 5;
	//solicitar al usuario un valor entre 0 y 5
	int dato;
	printf("proporciona un numero entre 0 y 5:\n");
	scanf("%d", &dato); //escanea y almacena en variable dato con &
	//verificamos si esta dentro del rango 
	bool dentroRango = dato >= minimo && dato <= maximo;
	printf("\nValor dentro de rango? %d", dentroRango);
	return 0;
}

