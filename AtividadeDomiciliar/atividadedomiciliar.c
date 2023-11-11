#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 7

struct Contato {
    char nome[50];
    char telefone[20];
};

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
            if (strcmp(contatos[i].telefone, contatos[i + gap].telefone) > 0) {
                struct Contato temp = contatos[i];
                contatos[i] = contatos[i + gap];
                contatos[i + gap] = temp;
                swapped = 1;
            }
        }
    }
}

void selectionSort(struct Contato contatos[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(contatos[j].telefone, contatos[min_idx].telefone) < 0) {
                min_idx = j;
            }
        }
        struct Contato temp = contatos[min_idx];
        contatos[min_idx] = contatos[i];
        contatos[i] = temp;
    }
}

void ImpreContatos(struct Contato contatos[], int n) {
    
    for (int i = 0; i < n; i++) {
        printf("Nome %s,Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
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

    printf("======Lista Telefônica Original======\n");
    for (int i = 0; i < n; i++) {
        printf("Nome %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
    }

    printf("\n======lista telefônica com Comb Sort======\n");
    combSort(contatos, n);
    ImpreContatos(contatos, n);

    printf("\n======Lista telefônica com Selection Sort======\n");
    selectionSort(contatos, n);
    ImpreContatos(contatos, n);

    return 0;
}
