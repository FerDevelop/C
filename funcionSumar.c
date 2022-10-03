#include <stdio.h>

//practicando con funciones

int sumar(int a, int b){
	int result = a + b;
	return result;			
}

int main() {
	int argA, argB, operacion;
	
	//ahora se requieren los ARGUMENTOS al USUARIO
	
	printf("introduce el argumento A: \n");
	scanf("%d", &argA);
	printf("introduce el argumento B: \n");
	scanf("%d", &argB);
	
	//ahora llamo a la funcion
	operacion = sumar(argA, argB);
	printf("el resultado de la suma es: %d\n", operacion);
	
	
	return 0;
}

