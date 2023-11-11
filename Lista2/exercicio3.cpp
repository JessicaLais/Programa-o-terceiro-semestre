//Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua
esta operação à variável PROD. A seguir mostre a variável PROD com mensagem
correspondente.//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, prod;
	
	printf("Atribua o valor de A:\n");
	scanf("%d", &a);
	
	printf("Atribua o valor de B:\n");
	scanf("%d", &b);
	
	prod = (a*b);
	
	printf("PROD = %d", prod);
	return 0;
}
