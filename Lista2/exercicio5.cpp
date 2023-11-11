//Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15%
de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	float salario, vendas, comissao;
	
	printf("Qual o seu nome?\n");
	scanf("%s", &nome);
	
	printf("Qual o seu salário fixo?\n");
	scanf("%f", &salario);
	
	printf("Quantas vendas efetuadas no mês(Valor em dinheiro)?\n");
	scanf("%f", &vendas);
	
	comissao = (vendas*15/100)+salario;
	
	printf("TOTAL = %.2f", comissao);
	
	return 0;
} 
