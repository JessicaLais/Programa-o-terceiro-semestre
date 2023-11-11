//Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor
unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário
de cada peça 2. Após, calcule e mostre o valor a ser pago.//


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float codpeca1, qtdpeca1, valorpeca1, codpeca2, qtdpeca2, valorpeca2, total;
	
	printf("Qual o código da primeira peça?\n");
	scanf("%f", &codpeca1);
	
	printf("Quantas peças são?\n");
	scanf("%f", &qtdpeca1);
	
	printf("Qual o valor da peça?\n");
	scanf("%f", &valorpeca1);
	
	printf("Qual o código da segunda peça?\n");
	scanf("%f", &codpeca2);
	
	printf("Quantas peças são?\n");
	scanf("%f", &qtdpeca2);
	
	printf("Qual o valor da peça?\n");
	scanf("%f", &valorpeca2);
	
	total= (valorpeca1*qtdpeca1)+(valorpeca2*qtdpeca2);
	
	printf("Valor a pagar: %.2f", total);
	
	return 0;
} 
