#include<stdio.h>

void main(){
	int num, unidades, decenas, centenas, miles;
	int i = 0;
	int j =0;
	printf("Escriba un numero entre 1 y 3999\n");
	while(i < 1){
		scanf("%d", &num);
		if(num<1||num>4000){
			printf("Escriba un numero valido\n");
		}else{
			i =1;
		}
	}
	
	unidades=num%10;
	num=num/10;
	decenas=num%10;
	num=num/10;
	centenas=num%10;
	miles=num/10;
	
	int c = centenas-5;
	int d = decenas -5;
	int u = unidades-5;
	
	for(j = 0; j < miles; j++){
		printf("M");
	}
	
	i=0;
	j=0;
	
	if(centenas==9){
		printf("CM");
	} else if(centenas>=5){
		printf("D");
		for(i = 0; i < c; i++){
			printf("C");
		}
	}else if(centenas==4){
		printf("CD");
	}else{
		for(j = 0; j < centenas; j++){
			printf("C");
		}
	}
	
	i=0;
	j=0;
	
	if(decenas==9){
		printf("XC");
	} else if(decenas>=5){
		printf("L");
		for(i = 0; i < d; i++){
			printf("X");
		}
	}else if(decenas==4){
		printf("XL");
	}else{
		for(j = 0; j < decenas; j++){
			printf("X");
		}
	}
	
	i=0;
	j=0;
	
	if(unidades==9){
		printf("IX");
	} else if(unidades>=5){
		printf("V");
		for(i = 0; i < u; i++){
			printf("I");
		}
	}else if(unidades==4){
		printf("IV");
	}else{
		for(j = 0; j < unidades; j++){
			printf("I");
		}
	}
	
}
