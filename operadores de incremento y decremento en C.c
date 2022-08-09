#include <stdio.h>

int main() {
	//OPERADORES DE INCREMENTO Y DECREMENTO EN C	
	int a, b, c;
	//POST-INCREMENTO
	a = 5;
	printf("El valor de a es: %d", a);
	
	a++;//nunca olvidar colocar el ; luego de cada sentencia (aca ya vale 6)
	printf("\nEl valor actualizado de a es: %d", a);
	printf("\nEl valor de a luego de a++ quedo en: %d", a);
	
	//PRE-INCREMENTO
	++a;
	printf("\nEl valor de a luego de ++a quedo en: %d", a);
	
	return 0;
}

