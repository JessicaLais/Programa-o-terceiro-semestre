//Faça um algoritmo que leia dois números A e B e imprima o maior deles//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float a, b;
	
	printf("Número A:\n");
	scanf("%f", &a);
	
	printf("Número B:\n");
	scanf("%f", &b);
	
	if(a>b){
		printf("Número maior é A de %.1f\n",a);
	}if(a<b){
		printf("Número maior é B de %.1f\n",b);
	}
		
	return 0;
}
