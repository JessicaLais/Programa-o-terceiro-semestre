//Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, d, diferenca;
	
	printf("Atribua o valor de A:\n");
	scanf("%d", &a);
	
	printf("Atribua o valor de B:\n");
	scanf("%d", &b);
	
	printf("Atribua o valor de C:\n");
	scanf("%d", &c);
	
	printf("Atribua o valor de D:\n");
	scanf("%d", &d);
	
	diferenca = (a*b-c*d);
	
	printf("diferença = %d", diferenca);
	return 0;
} 
