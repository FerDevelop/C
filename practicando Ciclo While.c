#include <stdio.h>
#include <stdbool.h>
int main() {
	//Practicando nuevamente CICLO WHILE
	//definir variables
	int contador = 0, repeticiones = 10;
	
	while(contador <= repeticiones){		
		printf("%d\n", contador); //aca vale 0 inicialmente
		contador++; //aca vale 1 mas en el proximo ciclo
		
		
      /* while(contador <= repeticiones){
		 printf("%d\n", contador++); 		
		esta es la sintaxis simplificada con el contadoren una misma linea*/			
	}
	return 0;
}

