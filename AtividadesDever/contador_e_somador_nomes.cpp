#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("===============Contador,somador de nome===============\n");
	
    char nome[100], primeiras_letras[5]
	,palavra[100], substituto, c;
    int somaletras, num_vogais = 0, i;
    
	printf("Digite um nome: \n");
  	gets(nome);
    
    system("cls");
    
    strncpy(primeiras_letras, nome, 4);
    primeiras_letras[4] = '\0';
    somaletras= strlen(nome);
    
 	for (i = 0; i < strlen(nome); i++){
      c = nome[i];  
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            num_vogais++;
        }
}
    printf("As 4 primeiras letras do nome sao: %s\n", primeiras_letras);
    printf("O nome tem %d vogais.\n", num_vogais);
    printf("Total de letras do nome são %d\n", somaletras);
    printf("Digite uma consoante para substituir as vogais: ");
    scanf("%c", &substituto);
    
    for (i = 0; i < strlen(nome); i++) {
        c = nome[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            nome[i] = substituto;
        }
    }
    
    printf("Nome com as vogais substituidas: %s\n", nome);
    return 0;
}