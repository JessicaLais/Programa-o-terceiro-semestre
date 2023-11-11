#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 7

struct Contato {
    char nome[50];
    char telefone[20];
};

void selectionSort(struct Contato contatos[], int n) {
    int i, j, menor;
    for (i = 0; i < n - 1; i++) {
        menor = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(contatos[j].telefone, contatos[menor].telefone) < 0) {
                menor = j;
            }
        }
        struct Contato temp = contatos[menor];
        contatos[menor] = contatos[i];
        contatos[i] = temp;
    }
}

void combSort(struct Contato contatos[], int n) {
    int gap = n;
    int swapped = 1;

    while (gap != 1 || swapped == 1) {
        gap = gap * 10 / 13;
        if (gap < 1) {
            gap = 1;
        }
        swapped = 0;

        for (int i = 0; i < n - gap; i++) {
            if (strcmp(contatos[i].nome, contatos[i + gap].nome) > 0) {
                struct Contato temp = contatos[i];
                contatos[i] = contatos[i + gap];
                contatos[i + gap] = temp;
                swapped = 1;
            }
        }
    }
}

void EscreveContatos(struct Contato contatos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nome %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
    }
}

int main() {
    struct Contato contatos[MAX_CONTATOS];

    strcpy(contatos[0].nome, "Maria Antonia");
    strcpy(contatos[0].telefone, "93068-7159");

    strcpy(contatos[1].nome, "João Carvalho");
    strcpy(contatos[1].telefone, "98765-4321");

    strcpy(contatos[2].nome, "Ana Julia");
    strcpy(contatos[2].telefone, "98590-8282");

    strcpy(contatos[3].nome, "Pedro Maia");
    strcpy(contatos[3].telefone, "97203-6021");

    strcpy(contatos[4].nome, "Carlos Andrade");
    strcpy(contatos[4].telefone, "95602-1094");

    strcpy(contatos[5].nome, "Giovanna Ribeiro");
    strcpy(contatos[5].telefone, "9786-78590");

    strcpy(contatos[6].nome, "Universidade Catolica");
    strcpy(contatos[6].telefone, "3356-9000");

    int n = sizeof(contatos) / sizeof(contatos[0]);
            
printf("================================================\n");
    printf("Lista Telefônica Original:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
    }
  printf("================================================");
    printf("\nLista Telefônica Ordenada por Telefone com Selection Sort\n\n");
    selectionSort(contatos, n);
    EscreveContatos(contatos, n);

printf("================================================\n");
    printf("Lista Telefônica Ordenada Alfabeticamente com Comb Sort\n\n");
    combSort(contatos, n);
    EscreveContatos(contatos, n);
printf("================================================");
    return 0;
}
