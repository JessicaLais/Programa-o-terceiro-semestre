#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char nome[50], sobrenome[50], nomecompleto[100];
  float preco,precototal;
  int i=0;

      printf("===============Registrador de produtos===============\n");

    puts("informe o seu nome:");
    gets(nome);

    puts("Informe o seu sobrenome:");
    gets(sobrenome);

    printf("===============Registre o preço de um produto por vez===============\n");

  for(;;){

    preco=0;
    printf("Digite o preço do produto. Caso queira parar as anotações, digite 0  :\n");
    scanf("%f", &preco);
    if(preco == 0)
      break;
    precototal+=preco;
    i++;
  }
    strcpy(nomecompleto,nome);
    strcat(nomecompleto, sobrenome);

    system("cls");

    printf("Sr.(a) %s. Bem vindo(a)", nomecompleto);
    printf("\nTotal de produtos: %d", i);
    printf("\nO preço total da sua conta foi de : R$%.2f\n", precototal);
  

    return 0;
} 