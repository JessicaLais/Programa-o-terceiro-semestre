#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
int main(void)
{
   char email[100], senha[50];
   int iSenha, i, especial = 0,numero = 0;
 	
   setlocale(LC_ALL, "Portuguese");
 	
   printf("Cadastre o email: \n");
   gets(email);
   puts("Senha precisa de 1 caractere especial, um número e letras");
   printf("Digite a senha: \n");
   gets(senha);
 
   iSenha = strlen(senha);
 
   for (i = 0; i <iSenha ; i++) {
       if (senha[i] == '@' || senha[i] == '?' || senha[i] == '!') {
           especial = 1;
       }if (senha [i] >='A' && senha[i] <='Z') {
           numero = 1;
       }
   }
  
   if (especial && numero) {
       printf("Seja bem vindo!Usuário cadastrado\n");
   } else {
       printf("Falha no cadastro.Senha Inválida");
   }
 
   return 0;
}
