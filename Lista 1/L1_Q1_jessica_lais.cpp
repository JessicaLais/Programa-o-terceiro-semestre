//Jéssica Laís da Mota Freire. Q1-A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber: a) média salarial da população; b) média do número de filhos; c)maior salário; d) percentual de pessoas com salário até R$ 100,00. O final da leitura de dados se dará com a entrada de um salário negativo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  setlocale (LC_ALL,"Portuguese");
  
  float salario, filhos, media, mediaf, total = 0, total2 = 0, maiorsal, percentual = 0;
  int i=0;

	printf("=========PESQUISA=========");
	printf("\nCaso queira encerrar o programa digite um salário negativo\n");
	while(i <=100){
		printf("\nDigite o salario:");
		scanf("%f", &salario);
      if(salario < 0)
        break;
    total = total+salario;
		i++;
    
    printf("\nQuantos filhos tem?:");
		scanf("%f", &filhos);
    total2 = total2+filhos;
		i++;

    if(salario > maiorsal){
      maiorsal = salario;
    }
    
    if(salario < 100){
      percentual++;
    }
  }   
  
  	i = i/2;
  	media = total/i;
  	mediaf = total2/i;
	percentual = (percentual /i)*100;
    
    system("cls");
    
  	printf("=========RESULTADOS=========");
    printf("\nMédia salarial de: %.2f", media);
    printf("\nMédia de filhos de: %.2f", mediaf);
    printf("\nO maior salário foi de %.2f", maiorsal);
    printf("\nO percentual de pessoas com salario abaixo de 100 é de %.2f porcento", percentual);
  return 0;
}