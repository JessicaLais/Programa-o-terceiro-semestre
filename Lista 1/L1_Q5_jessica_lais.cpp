//Jéssica Laís da Mota Freire. Q5- Desenvolva um programa que calcula a metragem quadrada de um terreno, usando o teste no final para criar a opção de digitar novos valores sem sair do programa. O programa deverá pedir ao usuário para digitar a metragem1 do terreno, a metragem 2 e em seguida mostrar o tamanho total do terreno em metros quadrados. O programa deverá perguntar ao usuário se ele quer continuar para digitar outras metragens ou encerrar o programa

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "Portuguese");
  
  float metragem1, metragem2, total;
  char resposta;

  do{
  printf("Digite a metragem 1 do terreno: \n");
  scanf("%f", &metragem1);

  printf("Digite a metragem 2 do terreno: \n");
  scanf("%f", &metragem2);

  total = metragem1 * metragem2;

  system("cls");
  printf("=========RESULTADOS=========");
  printf("\nO valor total do terreno é de: %.2f metros quadrados\n", total);

  printf("\nDeseja continuar?Se Sim, digite S , se não,digite N\n");
    scanf("%s", &resposta);
  }
    while (resposta == 's' || resposta == 'S');
  return 0;
}