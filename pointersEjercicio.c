#include <stdio.h>
//breve ejercicio de apuntadores o pointers
int main() {		
	int myNumber = 300;
	printf("el valor de la variable myNumber es: %d", myNumber);
	//ahora se imprime la direccion de memoria de esta variable	
	// & delante de la variable para indicar al sistema direccion en memoria
	//%p no se debe omitir el formato pointer en la misma sentencia
	printf("\nel lugar de la memoria es: %p", &myNumber);
	//AHORA A DEFINIR UNA VARIABLE DE TIPO APUNTADOR O POINTER
	// estas siempre llevan asterisco delante *
	//esto solo almacenara una DIRECCION DE MEMORIA	
	int *apuntador = &myNumber;
	//VALOR DE LA VARIABLE APUNTADOR
	// CUANDO DESEAMOS IMPRIMIR LA DIRECCION DE MEMORIA DE apuntador
	//ESTE YA NO NECESITA EL USO DE & antes de la variable apuntador
	printf("\nla direccion de memoria del apuntador es: %p", apuntador);	
	//ahora a obtener el valor de la variable a la cual apunta (DEREFERENCE)
	printf("\nel valor de la variable(*apuntador) es la misma: %d", *apuntador);
	//cambio del valor de myNumber(a la que apuntamos)
	*apuntador = 5;
	printf("\nYa modifique el valor de la variable myNumber");
	//ahora a imprimir el valor de la variable apuntada
	printf("\nel nuevo valor de myNumber es: %d", myNumber);
	//y tambien voy a imprimir el valor de apuntador
	printf("\nel valor de la variable(*apuntador) modificada es: %d", *apuntador);
	return 0;
}

