#include <stdio.h>

int main() {
	//sumar los primeros 5 numeros en ciclo while
	int numero = 1, minimo = 0, maximo = 5 , acumuladorSuma = 0;
	
	while(numero <= maximo){
		//realizar la suma acumulativa
		//en cada iteracion se efectua una suma parcial
		printf("la suma de acumuladorsuma + numero es: %d + %d\n", acumuladorSuma, numero);
		acumuladorSuma += numero;
		printf("la suma parcial acumulada es: %d\n",acumuladorSuma);
		numero++;
	}
	printf("\nLa suma de los 5 primeros numeros es: %d", acumuladorSuma);
	
	return 0;
}

