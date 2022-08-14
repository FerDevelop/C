#include <stdio.h>

int main() {
	//PRECEDENCIA DE OPERADORES (JERARQUIA O PRIORIDAD)
	
	//1.Parentesis y Corchetes    ()[]
	//2.Operadores Unarios  --, ++ , !
	//3.Aritmeticos *,/, y % (multiplicacion, divisio y residuo)
	//4.Aritmeticos + y - (suma y resta)
	//5.Relacionales <, >, <= y >=
	//6.Igualdad == y !=
	//7.Logicos && , || (and, or)
	//8.Asignacion +=, -= , /= *= etc
	
	//recordar que la expresiones se revisan de IZQUIERDA A DERECHA
	//EJ.
	int a = 12 / 3 + 2 * 3 - 1;
	printf("el resultado es %d", a);
	//paso 1. division  12 / 3 = 4 
	//paso 2. multiplicacion  2 * 3 = 6
	//paso 3. suma 4 + 6 = 10	
	//paso 4. resta 10 - 1 = 9
	return 0;
}

