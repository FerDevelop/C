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
	//un ejemplo para observar las difrencias
	a = 5;
	b = 2;
	c = ++a * b++;
	printf("\nValor de a: %d", a);// no tenia pendiente incremento alguno.
	printf("\nValor de b: %d", b);
	// tenia pendiente un incremento y aumenta porque se uso en la funcion printf
	printf("\nValor de c: %d", c);
	// ++a (el valor se incrementa antes de usarse
	// b++ (el valor se incrementa en la proxima iteracion)
	
	//OPERADORES DE DECREMENTO: PRE-DECREMENTO Y POST-DECREMENTO
	a = 5;
	b = 2;
	c = --a * b--; // aca sigue valiendo 2 porque nu fue usada la variable
	printf("\nValor de c: %d", c);
	//EL MAS COMUN ES EL OPERADOR POST-INCREMENTO (a++) por ejemplo en los ciclos.
	return 0;
}

