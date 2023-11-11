//Jéssica Laís da Mota Freire. Q3- Elabore um programa que faça o sorteio de vários números e ao final mostra:a) A quantidade de números sorteados;b) O Maior numero sorteado;c) Quantos números pares foram sorteados. Observação: O programa deve finalizar quando for sorteado o valor 0 (zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "Portuguese");
  
  int numero, quantidade = 0, maior = 0, pares = 0;

  do {
    printf("Digite um numero, Digite 0 para encerrar o sorteio: ");
    scanf("%d", &numero);

      if (numero > 0) {
        quantidade++;

        if (numero > maior) {
          maior = numero;
            }if (numero % 2 == 0) {
              pares++;
        }
      }
    } while (numero > 0);

    system("cls");

    printf("=========RESULTADOS=========");
    printf("\nA quantidade de numeros sorteados foi de %d", quantidade);
    printf("\nO maior numero sorteado foi %d", maior);
    printf("\nA quantidade de numeros pares sorteados %d", pares);

    return 0;
}