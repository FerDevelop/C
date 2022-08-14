#include <stdio.h>

int main() {
	//sentencia if-else
	//verificar si un numero es positivo
	 
	printf("proporciona un numero Positivo\n");
	int numeroingresado;
	scanf("%d", &numeroingresado);
	//ahora a verificar si el numero es positivo.
	if (numeroingresado > 0){
		printf("tu numero %d es mayor a 0 con valor positivo", numeroingresado);
	}
	else{
		printf("tu numero %d es negativo", numeroingresado);
	}
	return 0;
}

