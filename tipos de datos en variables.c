#include <stdio.h>
#include <stdbool.h>
//TIPOS DE DATOS BASICOS EN C

int main() {
	//TIPO ENTERO
	//Con formato (printf %d o %i) %d (decimal) , %i(integer)
	int entero = 10;
	printf("Este entero es: %i", entero);
	
	//Tipo FLOTANTE
	//aca se utiliza %f (flotante en printf)
	float flotante = 1.5;
	printf("\nTipo flotante, este numero flotante es: %0.1f", flotante);
	// 0.1f que es para reducir la cantidad de digitos que se muestren
	
	//Tipo Doble o Double
	//aca se puede usar el formato printf(%f) flotante o (%lf) que significa long float
	double variableDoble = 15.6;
	printf("\nEste numero flotante doble tiene el valor: %0.1lf", variableDoble);
	//le agregue 0.1 para que no me muestre tantos digitos
	//no olvidar usar siempre \n (salto de linea con alt 92)
	
	//TIPO CHAR (el formato que se aplica es %c) o sea printf(%c de char)
	char caracter = 'h'; // (Alt 39 para generar comillas simples)
	printf("\nEste es un Tipo caracter: %c ", caracter);
	
	//TIPO BOOLEANO O BOOL (con los valores: true o false)
	//para usar bool se require llamar a la libreria <stdbool.h>
	bool booleano = true; 
	// recordar que el decimal 1 equivale a verdaderos y el decimal 0 equivale a falso
	printf("\nTipo Logico: %d ", booleano); // hay que convertirlo a logico 1 (true o verdadero)
	
	//Tipo arreglo de caracteres para representar un arreglo o CADENA
	//TIPO CADENA (ARREGLO DE CARACTERES EN C)
	char cadena[]= "esta cadena";
		printf("\nTipoArregloCadena: %s",cadena); // los espacios en blanco cuentan y el ultimo espacio
	
	char cadena2[20]= "mi cadena 2";
		printf("\nOtra cadena: %s ", cadena2);
	return 0;
}

