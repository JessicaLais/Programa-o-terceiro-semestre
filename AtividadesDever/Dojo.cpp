#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
int main(void)
{
   char email[100], senha[50];
   int iSenha,iEmail, i, especial = 0,numero = 0, necessario_email = 0;
 	
   setlocale(LC_ALL, "Portuguese");
 	
   printf("Cadastre o email: \n");
   gets(email);
   puts("Senha precisa de 1 caractere especial, um número e letras maiusculas e minusculas");
   printf("Digite a senha: \n");
   gets(senha);
 
   iSenha = strlen(senha);
   iEmail = strlen(email);
 
   for (i = 0; i <iSenha ; i++) {
       if (senha[i] == '@' || senha[i] == '?' || senha[i] == '!') {
           especial = 1;
       }if (senha [i] >='A' && senha[i] <='Z') {
           numero = 1;
       }
   }

   for (i = 0; i<iEmail; i++){
     if(email[i] == '@'){
       necessario_email = 1;
   }
}
   
   if (especial && numero && necessario_email) {
       printf("Seja bem vindo!Usuário cadastrado\n");
   } else {
       printf("Falha no cadastro.Senha Inválida ou Email Invalido");
   }
 
   return 0;
}