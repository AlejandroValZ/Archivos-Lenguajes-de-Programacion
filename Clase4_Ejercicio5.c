#include<stdio.h>

void main(){
	int  dias;
	int horas;
	int minutos;
	int segundosTotales;
	
	printf("Ingrese los dias:\n");
	scanf("%d", &dias);
	
	printf("Ingrese las horas:\n");
	scanf("%d", &horas);
	
	printf("Ingrese los minutos:\n");
	scanf("%d", &minutos);
	
	segundosTotales = (minutos*60)+(horas*3600)+(dias*3600*24);
	printf("Los segundos totales son: %d", segundosTotales);
}
