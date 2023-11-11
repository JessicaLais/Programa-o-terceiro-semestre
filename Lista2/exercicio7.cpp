//Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o
valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3
.Considere
(atribua) para pi o valor 3.14159.//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio, volume;
	double pi = 3.14159;
	
	printf("Qual o raio da esfera");
	scanf("%f", &raio);
	
	volume = (1.33333* pi * raio*raio*raio);
	
	printf("VOLUME = %f", volume);
	return 0;
}
