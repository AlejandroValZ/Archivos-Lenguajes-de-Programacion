#include<stdio.h>

void main() {
	float codigoArticulo;
	float precio;
	float cantidad;
	float descuento;
	float iva=19.0;
	float precioTotal;
	float totalConDescuento;
	float totalDeRialConIVA;

	printf("Ingrese codigo articulo :\n");
	scanf("%f", &codigoArticulo);

	printf("Ingrese precio en chilean pesos:\n");
	scanf("%f", &precio);

	printf("Ingrese cantidad:\n");
	scanf("%f", &cantidad);

	printf("Ingrese descuento:\n");
	scanf("%f", &descuento);

	precioTotal= precio*cantidad;
	totalConDescuento=precioTotal-((descuento*precioTotal)/100);
	totalDeRialConIVA=totalConDescuento+((iva*totalConDescuento)/100);

	printf("---------LOS PEQUES---------\n");
	printf("Codigo articulo :");
	printf("%f", codigoArticulo);
	printf("\n");
	printf("Precio:");
	printf("%f", precio);
	printf("\n");
	printf("Cantidad:");
	printf("%f", cantidad);
	printf("\n");
	printf("Precio total:");
	printf("%f", precioTotal);
	printf("\n");
	printf("Descuento:");
	printf("%f", descuento);
	printf("\n");
	printf("Precio total con descuento:");
	printf("%f", totalConDescuento);
	printf("\n");
	printf("IVA con respecto al total con descuento:");
	printf("%f", (iva*totalConDescuento)/100);
	printf("\n");
	printf("Precio total con descuento e IVA:");
	printf("%f", totalDeRialConIVA);
}
