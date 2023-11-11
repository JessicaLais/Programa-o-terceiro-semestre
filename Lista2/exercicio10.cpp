//Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme a condição: “F1”, se N <= 10 “F2”, se N > 10 e N <= 100 “F3”se n > 100//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Número:\n");
	scanf("%f", &num);
	
	if(num<=10){
		printf("F1",num);
	}if(num>10 && num<=100){
		printf("F2",num);
	}if(num>100){
		printf("F3",num);
	}
		
	return 0;
}
