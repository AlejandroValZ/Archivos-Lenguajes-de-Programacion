#include<stdio.h>

void main(){
	float num1, num2, num3, num4;
	float media;
	
	printf("Ingrese el N1\n");
	scanf("%f", &num1);
	
	printf("Ingrese el N2\n");
	scanf("%f", &num2);
	
	printf("Ingrese el N3\n");
	scanf("%f", &num3);
	
	printf("Ingrese el N4\n");
	scanf("%f", &num4);
	
	media = (num1+num2+num3+num4)/4;
	printf("La media de los 4 numeros es: %f", media);
}
