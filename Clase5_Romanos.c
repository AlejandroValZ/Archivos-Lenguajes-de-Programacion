#include<stdio.h>

void main(){
	int num, unidades, decenas, centenas, miles;
	int i = 0;
	int j = 0;
	printf("Escriba un numero entre 1 y 3999\n");
	while(i < 1){
		scanf("%d", &num);
		if(num < 1 || num > 4000){
			printf("Escriba un numero valido\n");
		}else{
			i = 1;
		}
	}
	
	unidades = num % 10;
	num = num / 10;
	decenas = num % 10;
	num = num / 10;
	centenas = num % 10;
	miles = num / 10;
	
	int c = centenas - 5;
	int d = decenas - 5;
	int u = unidades - 5;
	
	for(j = 0 ; j < miles ; j++){
		printf("M");
	}
	
	convertirARomano(centenas, c, "C", "CD", "D", "CM");
	convertirARomano(decenas, d, "X", "XL", "L", "XC");
	convertirARomano(unidades, u, "I", "IV", "V", "IV");
	
}

void convertirARomano(int posicionDigitos, int menosCinco, char uno[1], char cuatro[2], char cinco[1], char nueve[2]){
	int i = 0;
	int j = 0;
	
	if(posicionDigitos == 9){
		printf("%s", nueve);
	} else if(posicionDigitos >= 5){
		printf("%s", cinco);
		for(i = 0; i < menosCinco ; i++){
			printf("%s", uno);
		}
	}else if(posicionDigitos == 4){
		printf("%s", cuatro);
	}else{
		for(j = 0 ; j < posicionDigitos ; j++){
			printf("%s", uno);
		}
	}
}
