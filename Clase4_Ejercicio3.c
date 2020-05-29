#include<stdio.h>

void main(){
	float dolar;
	float euro;
	
	printf("Ingresa la cantidad de dolares a cambiar\n");
	scanf("%f",&dolar);
	euro=(0.92*dolar);
	printf("El valor en euros es: ");
	printf("%d", euro);
}
