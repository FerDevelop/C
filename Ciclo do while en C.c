#include <stdio.h>
#include <stdbool.h>
int main() {
	//Ciclo do while en C - HACER hasta - repetir hasta.
	//se ejecuta la condicion mientras sea verdadera
	//el ciclo si o si se ejecuta al menos 1 vez
	int numeroUsuario;
	bool condicion;
	//MIENTRAS LA CONDICION SEA VERDADERA SE REPITE EL CICLO
	do{//REPETIR MIENTRAS
		printf("\nProporciona un numero positivo: \n");
		scanf("%d",&numeroUsuario);
		condicion = numeroUsuario < 0;
		// se repetira mientras no sea positivo
	}while( condicion );
	printf("\nValor positivo proporcionado es %d", numeroUsuario);
	return 0;
}

