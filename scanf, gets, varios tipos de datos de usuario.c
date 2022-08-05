#include <stdio.h>
#include <stdbool.h>
int main() {
	//1. se definen las variables a utilizar
	int edad;
	bool empleadoConfianza;
	int empleadoConfianzaTemporal;
	int largoCadena = 50;
	char nombreCompleto[largoCadena];
	float sueldo;
	
	//2.Solicitar los valores al usuario
	printf("Proporciona tu nombre: \n");
	scanf("%s", nombreCompleto);
	printf("Proporciona tu edad: \n");
	scanf("%d", &edad);
	printf("Proporciona tu sueldo(en dolares):\n");
	scanf("%f", &sueldo);
	printf("sos un empleado de confianza? responder 1 V o 0 F\n");
	scanf("%d", &empleadoConfianzaTemporal);
	empleadoConfianza = empleadoConfianzaTemporal;
	
	//3.Imprimimos toda la informacion que se proporciono
	printf("\nLa informacion proporcionada es:\n");
	printf("%s nombre completo \n", nombreCompleto);
	printf("Edad: %d \n", edad);
	printf("Sueldo: %.2f \n", sueldo);
	printf("Empleado de confianza %d \n", empleadoConfianza);
	return 0;
}

