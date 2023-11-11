//Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre
elas e atribua à variável SOMA. A seguir escrever o valor desta variável.//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, soma;
	
	printf("Atribua o valor de A:\n");
	scanf("%d", &a);
	
	printf("Atribua o valor de B:\n");
	scanf("%d", &b);
	
	soma = (a+b);
	
	printf("Soma = %d", soma);
	return 0;
}
