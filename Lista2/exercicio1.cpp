//Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo especificado.//
      
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, x;
	
	printf("Atribua o valor de A:\n");
	scanf("%d", &a);
	
	printf("Atribua o valor de B:\n");
	scanf("%d", &b);
	
	x = (a+b);
	
	printf("X = %d", x);
	return 0;
}
