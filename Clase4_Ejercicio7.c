#include<stdio.h>
#include<math.h>
#include<conio.h>

void main() {
	float a;
	float b;
	float c;
	float x1;
	float x2;

	printf("Ingrese a: \n");
	scanf("%f", &a);

	printf("Ingrese b: \n");
	scanf("%f", &b);

	printf("Ingrese c: \n");
	scanf("%f", &c);

	int d = sqrt(b*b-(4*a*c));

	solucion1 = ((b*-1) + (d))/(2*a);
	solucion1 = ((b*-1) - (d))/(2*a);

	printf("Solucion 1: ");
	printf("%f", x1);0
	printf("\n");
	printf("Solucion 2: ");
	printf("%f", x2);
}
