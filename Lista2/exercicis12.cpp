/*Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma 
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda de 
um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se 
o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo 
extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%. 
Escreva um algoritmo que gere um relatório contendo nome, valor da venda e 
comissão de cada um dos corretores. O relatório deve mostrar também o total de 
vendas da empresa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50], nome2[50], nome3[50];
	float vendas1, vendas2,vendas3, comissao1, comissao2, comissao3,comissoes, total, vendas;
	
	
	printf("Qual o nome do primeiro corretor?\n");
	scanf("%s", &nome1); 
	
	printf("Qual o valor das vendas efetuadas no mês do primeiro corretor?\n");
	scanf("%f", &vendas1);
	
	printf("Qual o nome do segundo corretor?\n");
	scanf("%s", &nome2); 
	
	printf("Qual o valor das vendas efetuadas no mês do segundo corretor?\n");
	scanf("%f", &vendas2);
	
	printf("Qual o nome do terceiro corretor?\n");
	scanf("%s", &nome3); 
	
	printf("Qual o valor das vendas efetuadas no mês do terceiro corretor?\n");
	scanf("%f", &vendas3);
	
	printf("Quantas vendas da empresa efetuadas no mês todo?\n");
	scanf("%f", &total);
	
	comissao1 = (vendas*12/100);
	comissao2 = (vendas*9.5/100);
	comissao3 = (vendas*7/100);
	
	if(vendas >50.000){
		printf("Comissão: %.3f", comissao1);
	}if(vendas >=30.000){
		printf("Comissão: %.3f", comissao2);
		}if(vendas<=50.000){
			printf("Comissão: %.3f", comissao2);
	}if(vendas<=29.999){
		printf("Comissão: %.3f", comissao3);
	}
	 system("cls");
	 
	vendas = (vendas1, vendas2, vendas3);
	comissoes = (comissao1, comissao2, comissao3);
	
		printf("Corretor: %s \n", nome1);
		printf("valor da venda: %f \n", vendas1);
		printf("comissão: %.3f \n", comissoes);
		
		printf("Corretor: %s \n", nome2);
		printf("valor da venda: %f \n", vendas2);
		printf("comissão: %.3f \n", comissoes);
		
		printf("Corretor: %s \n", nome3);
		printf("valor da venda: %f \n", vendas3);
		printf("comissão: %.3f \n", comissoes);
		
		printf("Total de vendas: %f \n", total);
	
	return 0;
} 
