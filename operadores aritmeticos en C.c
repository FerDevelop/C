#include <stdio.h>
#include <math.h>
int main() {
	//OPERADORES ARITMETICOS
	int a,b,c,e,f;
	float d;
	//suma +
	a = 3 + 5;
	printf("valor de la suma es: %d", a);
	
	//resta
	b = 82 - 2;
	printf("\nvalor de la resta es: %d", b);
	
	//multiplicacion
	c = a * 2;
	printf("\nvalor de la multiplicacion es: %d", c);
	
	//division
	d = b / c;
	printf("\nvalor de la division es: %.2f", d); //f de flotante porque no va a dar entero
	
	//modulo - residuo de la divisio
	f = 21 % 4;
	printf("\nvalor del residuo de la division es: %d", f);
	
	//operacion de potencia
	e = pow(a, 2); // eleva al cuadrado la variable a
	//hay que incluir la libreria #include <math.h> para usar pow
	printf("\nValor de la potencia de A es: %d ", e);
	
	return 0;
}

