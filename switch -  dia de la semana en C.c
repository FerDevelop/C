#include <stdio.h>

int main() {
	//Algoritmo Dia de la Semana en C con ESTRUCTURA SWITCH
	int diaSemana;
	printf("proporciona el dia de la semana\n");
	scanf("%d", &diaSemana);
	//Revisar el dia de la semana que eligio EN SWITCH
	switch (diaSemana){
		//case = es el valor que compara con diaSemana
	case 1:
		printf("\nel dia %d es lunes", diaSemana);
		break;
	case 2:
		printf("\nel dia %d es martes", diaSemana);
		break;
	case 3:
		printf("\nel dia %d es miercoles", diaSemana);
		break;
	case 4:
		printf("\nel dia %d es jueves", diaSemana);
		break;
	case 5:
		printf("\nel dia %d es viernes", diaSemana);
		break;
	case 6:
		printf("\nel dia %d es sabado", diaSemana);
		break;
	case 7:
		printf("\nel dia %d es domingo", diaSemana);
		break;
	default:
		printf("\nel dia %d es erroneo, no corresponde a un dia de la semana", diaSemana);		
	}
	
	return 0;
}

