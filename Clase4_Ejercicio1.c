#include<stdio.h>

void main(){
	int precio;
	int descuento;
	int total;
	
	printf("Ingrese el precio\n");
	scanf("%d", &precio);
	printf("Ingrese el porcentaje de descuento\n");
	scanf("%d", &descuento);
	
	total = precio - ((descuento*precio)/100);
	
	printf("El total es: $%d", total);
}
