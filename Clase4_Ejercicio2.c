#include<stdio.h>

void main(){
	int lado1;
	int lado2;
	int perimetro;
	int area;
	
	printf("Ingrese primer lado");
	scanf("%d", &lado1);
	
	printf("Ingrese segundo lado");
	scanf("%d", &lado2);
	
	perimetro = (lado1*2)+(lado2*2);
	area = lado1*lado2;
	
	printf("El perimetro es: %d", &perimetro);
	printf("El area es: %d", &area);
}
