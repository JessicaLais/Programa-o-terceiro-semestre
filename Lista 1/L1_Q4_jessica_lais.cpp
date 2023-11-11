//Jéssica Laís da Mota Freire. Q4- . Elabore um programa que receba como dados de entrada duas notas de vários alunose ao final mostra:a) A quantidade de alunos com media maior ou igual a 7,0;b) A Menor media da Turma;c) A Media geral da turma;d) Quantas vezes o programa rodou. Observação: O programa deve finalizar quando for digitado o valor 0 (zero) e utilizar nomáximo 6 variáveis não utilizar vetores ou matrizes

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  setlocale (LC_ALL,"Portuguese");
  
  float  media_geral, menor_media, media_nota, nota;
  int qtd_aluno = 0, i= 0;


for(;;){
    
    media_nota=0;
    printf("Digite a primeira nota. Caso queira parar as anotações de nota, digite 0  :\n");
    scanf("%f", &nota);
    if(nota == 0)
      break;
    media_nota += nota;
    i++;

    printf("Digite a segunda nota. Caso queira parar as anotações de nota, digite 0  :\n");
    scanf("%f", &nota);
    media_nota += nota;
    
    media_nota = media_nota/2;
  	media_geral += media_nota;
    
  if(media_nota >= 7){
        qtd_aluno++;
    }
    if(media_nota < 7){
    	menor_media = media_nota;
    }
  }
 system("cls");
  
 printf("=========RESULTADOS=========");
 printf("\nQuantidades de Alunos acima da média: %d ", qtd_aluno);
 printf("\nMenor media da turma: %.2f", menor_media);
 printf("\nMedia geral da turma: %.2f", media_geral/2);
 printf("\nA quantidade de vezes que o programa rodou foi de: %d", i);
 	return 0;
}