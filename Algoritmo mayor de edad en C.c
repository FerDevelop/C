#include <stdio.h>

int main() {
	//Creando Algoritmo mayor de Edad
	const int edadAdulto = 18;
	int edadProporcionada = 0;
	printf("Proporciona tu edad\n");
	scanf("%d", &edadProporcionada);
	//ahora verificamos si es mayor de edad 
	if (edadProporcionada >= edadAdulto){
		printf("tu edad es: %d y sos mayor de edad", edadProporcionada);
	}
	else {
		printf("eres menor de edad porque tu edad es: %d", edadProporcionada);
	}
	return 0;
}

