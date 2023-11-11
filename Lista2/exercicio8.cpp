//Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e
mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c, areatr, areacir, areatrap, areaquad, arearet;
	double pi=3.14159;
	
	printf("Valor A\n");
	scanf("%f", &a);
	
	printf("Valor B\n");
	scanf("%f", &b);
	
	printf("Valor C\n");
	scanf("%f", &c);
	
	areatr = (a*c)/2;
	
	areacir = pi* c*c;
	
	areatrap = ((a+b)*c)/2;
	
	areaquad = (b*b);
	
	arearet = (a*b);
		
	printf("Triângulo: %.3f\n", areatr);
	printf("Círculo: %.3f\n", areacir);
	printf("Trapezio: %.3f\n", areatrap);
	printf("Quadrado: %.3f\n", areaquad);
	printf("Retângulo: %.3f\n", arearet);
	
	return 0;
}
