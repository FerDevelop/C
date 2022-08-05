#include <stdio.h>

int main(int argc, char *argv[]) {	
	//1.Primero declarar una variable
	
	int numeroUsuario = 10;
		printf("Valor de variable %d", numeroUsuario);
		printf("\nEsta es mi variable, ubicacion en memoria %p", &numeroUsuario);
	//2.Ahora hay que solicitarle al Usuario que introduzca un valor
		printf("\nProporciona un numero: \n ");
	/*3.Recuperar el valor proporcionado por el usuario y se lee el valor 
		y se asigna a una variable, en C se usa la funcion "scanf()" o como seria
		en Psint "Leer" */
		scanf("%d", &numeroUsuario);// "&" no la variable sino la referencia en memoria
	//4. Imprimir la informacion proporcionada por el usuario
		printf("\nEl numero porporcionado es: %d", numeroUsuario);
		printf("\nEl valor de memoria es: %p ", &numeroUsuario);
		//la direccion de memoria sera la misma, solo cambia el valor.
	return 0;
}

