#include <stdio.h>

//esta es otra forma de definir constantes en C
#define PI 3.1416 //es flotante %f

//hay una libreria que se llama math.h que contiene CONSTANTES DEL SISTEMA
#include<math.h>

int main() {
	//DEFINIR CONSTANTES EN C
	const int MI_CONSTANTE= 10;
	//YA NO PUEDE MODIFICARSE
	printf("Este es el valor de la constante = %d", MI_CONSTANTE);
	printf("\nEste es el valor de PI= %f", PI);
	//aca imprimo la constante de la libreria #include<math.h>
	printf("\nAhora accedere a la constate PI del sistema: %f", M_PI);
	
	//ahora defino una constante por ejemplo: SEGUNDOS POR MINUTO
	const int SEGUNDOS_XMIN = 60;
	printf("\nESTA ES MI CONSTANTE DE SEGUNDOS POR MIN: %d", SEGUNDOS_XMIN);
	return 0;
}

