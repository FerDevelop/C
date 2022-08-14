#include <stdio.h>

int main() {
	//OPERADOR TERNARIO EN C
	// 1 linea de codigo SOLO CUANDO HAY 1 BLOQUE IF Y 1 BLOQUE ELSE
	
	printf("proporciona un numero Positivo\n");
	int numeroingresado;
	scanf("%d", &numeroingresado);
	//ahora a verificar si el numero es positivo.
/*	if (numeroingresado > 0){*/
/*		printf("tu numero %d es mayor a 0 con valor positivo\n", numeroingresado);*/
/*	}*/
/*	else{*/
/*		printf("tu numero %d es Cero", numeroingresado);*/
/*	}*/
	
	//Operador ternario
	/*(expresion)? "caso de verdadero" : "falso*/
	
	(numeroingresado > 0)? printf("Positivo") : printf("Cero o negativo");
	
	return 0;
}

