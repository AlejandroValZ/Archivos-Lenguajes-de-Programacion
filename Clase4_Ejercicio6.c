#include<stdio.h>

void main(){
	int segundos;
	int dias;
	int horas;
	int minutos;
	
	printf("Ingrese los segundos:\n");
	scanf("%d", &segundos);
	
	dias = segundos/86400;
	
	if(dias>0){
		int i = 0;
		for(i = 0;i<dias;i++){
			segundos -= 86400;
		}
	}
	
	horas = segundos/3600;
	
	if(horas>0){
		int i = 0;
		for(i = 0;i<horas;i++){
			segundos -= 3600;
		}
	}
	
	minutos = segundos/60;
	
	if(minutos>0){
		int i = 0;
		for(i = 0;i<minutos;i++){
			segundos -= 60;
		}
	}
	
	printf("Los dias totales son: %d\n", dias);
	printf("Las horas totales son: %d\n", horas);
	printf("Los minutos totales son: %d\n", minutos);
	
}
