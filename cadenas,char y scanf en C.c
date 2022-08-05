#include <stdio.h>
int main() {
	//1.Declartar variable
	int cadenaString = 30;
	char nombre[cadenaString]; // o sea aqui almacenara 10 caracteres(cadenaString)
	//2.Indicar al usuario que introduzca un valor	
	printf("\n proporciona tu nombre \n");
	//3.Leer la informacion
	//scanf("%s", nombre);
	//fgets(nombre, cadenaString, stdin); //otra forma de leer info de la consola: 
	gets(nombre); //otra forma de leer info de la consola:
	//4.imprimir el valor
	printf("\nEl nombre es: %s", nombre);
	return 0;
}

