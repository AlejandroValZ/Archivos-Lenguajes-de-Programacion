#include<stdio.h>

void main(){
	float pi = 3.1416;
	float radio;
	float pCircunferencia;
	float aCirculo;
	float vEsfera;
	
	printf("Ingrese el radio\n");
	scanf("%f", &radio);
	
	pCircunferencia = 2*pi*radio;
	aCirculo = pi*radio*radio;
	vEsfera = (4*pi*radio*radio*radio)/3;
	
	printf(" El valor del perimetro de la circunferencia es: %f\n", pCircunferencia);
	printf(" El valor del area del circulo es: %f\n", aCirculo);
	printf(" El valor del volumen de la esfera es: %f\n", vEsfera);
}
