#include <stdio.h>
#include <stdbool.h>
int main() {
	//OPERADORES RELACIONALES (COMPARACION DE VARIABLES O EXPRESIONES)
	int a, b;
	a = 20;
	b = 15;
	printf("el valor de a: es % d", a);
	printf("\nel valor de b: es % d", b);
	
	//OPERADORES DE IGUALDAD
	//hay que incluir la libreria <stdbool.h>
	bool c = (a == b); // aca c puede valer TRUE(1) o FALSE(0)
	printf("\n풹 es igual a b? %d", c); // aca el resultado es 0(false)
	
	//OPERADOR DISTINTO !=
	c = a != b; // aca es verdadero( el resultado es 1)
	printf("\n풹 es distinto que b?: %d", c);
	
	//OPERADOR MAYOR QUE
	c = a > b; // es verdadero, asi que el resultador sera 1 (true)
	printf("\n 풹 es mayor a b? % d", c);
	
	//OPERADOR MAYOR O IGUAL
	c = a >= b; //es true o verdadero asi que el valor sera 1
	printf("\n 풹 es mayor o igual a b? % d", c);
	
	//OPERADOR MENOR QUE
	c = a < b; // es falso, asi que el valor sera 0(false)
	printf("\n 풹 es menor a b? % d", c);
	
	//OPERADOR MENOR O IGUAL QUE
	c = a <= b; // es falso, asi que el valor sera 0 (false)
	printf("\n 풹 es menor o igual a b? % d", c);
	
	return 0;
}

