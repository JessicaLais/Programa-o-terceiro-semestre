//Jéssica Laís da Mota Freire. Q2-Faça um programa em C que recebendo a altura e o crescimento anual de duas pessoas calcule e imprima quantos anos serão necessários para que a mais baixa seja maior que a outra. Caso isto não ocorra em 100 anos informar mensagem de impossibilidade.Encerre a entrada de dados quando for digitada uma idade negativa. (Não use vetores ou matrizes).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale (LC_ALL,"Portuguese");
  
  float altura1, altura2, crescimento1, crescimento2, ano = 0;

  printf("Qual a Altura da pessoa mais alta?");
  scanf("%f", &altura1);

  printf("\nQuantos centimetros cresce por ano?");
  scanf("%f", &crescimento1);

  printf("\nQual a altura da pessoa mais baixa?");
  scanf("%f", &altura2);

  printf("\nQuantos centimetros cresce por ano?");
  scanf("%f", &crescimento2);

      while(altura1 > altura2){
      	ano++;
        altura1+=crescimento1;
        altura2+=crescimento2;
      }
  system("cls");
  printf("=========RESULTADO=========");
  if(ano > 100){
     printf("\nNão é possível a pessoa mais baixa ser maior que a pessoa mais alta.\n", altura2, altura1);
  }else{
   printf("\nA pessoa mais baixa vai ser maior que a pessoa mais alta em %.2f anos.\n", ano);}
  return 0;
}