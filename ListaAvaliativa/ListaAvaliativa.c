#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Jogador {
    char nome[100];
    char time[100];
    int gols;
};

int main() {
    struct Jogador jogadores[3];
    int i, total_gols = 0, flamengo_jogadores = 0;
    
    // Cadastro dos jogadores
    for (i = 0; i < 3; i++) {
        printf("\n==========Dados Cadastrais do jogador %d==========\n\n", i+1);
        printf("Digite o nome do jogador: \n");
        scanf(" %[^\n]", jogadores[i].nome);
        
        printf("Digite o time do jogador: \n");
        scanf(" %[^\n]", jogadores[i].time);
         if (strcmp(jogadores[i].time, "Flamengo" ) == 0) {
            flamengo_jogadores++;
        }
        
        printf("Digite a quantidade de gols do jogador: \n");
        scanf("%d", &jogadores[i].gols);
        total_gols += jogadores[i].gols;
        }
    
   struct Jogador artilheiro = jogadores[0];
    for (i = 1; i < 3; i++) {
        if (jogadores[i].gols > artilheiro.gols) {
            artilheiro = jogadores[i];
        }
    }
	system("cls");
	printf("==========Resultados==========\n");
    printf("Quantidade total de gols marcados: %d\n", total_gols);
    printf("Quantidade de jogadores que jogam no Flamengo: %d\n", flamengo_jogadores);
    printf("\n==========Dados do artilheiro==========\n");
    printf("Nome: %s\n", artilheiro.nome);
    printf("Time:  %s\n", artilheiro.time);
    printf("Quantidade de gols: %d\n", artilheiro.gols);
    
    return 0;
}