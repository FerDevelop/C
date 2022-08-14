#include <stdio.h>

int main() {
	//Algoritmo Dia de la Semana en C con if - elseif -  else
	int diaSemana;
	printf("proporciona el dia de la semana\n");
	scanf("%d", &diaSemana);
	//ahora a revisar el dia de la semana que eligio
	if (diaSemana == 1){
		printf("\nel dia %d es lunes", diaSemana);
	}
	else if (diaSemana == 2){
		printf("\nel dia %d es martes", diaSemana);
	}
	else if (diaSemana == 3){
		printf("\nel dia %d es miercoles", diaSemana);
	}
	else if (diaSemana == 4){
		printf("\nel dia %d es jueves", diaSemana);
	}
	else if (diaSemana == 5){
		printf("\nel dia %d es viernes", diaSemana);
	}
	else if (diaSemana == 6){
		printf("\nel dia %d es sabado", diaSemana);
	}
	else if (diaSemana == 7){
		printf("\nel dia %d es domingo", diaSemana);
	}
	else{
			printf("\nel dia %d no es un dia de la semana", diaSemana);
	}
	return 0;
}

