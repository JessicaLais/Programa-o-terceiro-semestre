#include <stdio.h>
#include <string.h>

#define MAX_CALLS 5

struct Call {
    char callerName[50];
    int callNumber;
};

void combSort(struct Call calls[], int n) {
    int gap = n;
    int swapped = 1;

    while (gap != 1 || swapped == 1) {
        gap = gap * 10 / 13;
        if (gap < 1) {
            gap = 1;
        }
        swapped = 0;

        for (int i = 0; i < n - gap; i++) {
            if (strcmp(calls[i].callerName, calls[i + gap].callerName) > 0) {
                struct Call temp = calls[i];
                calls[i] = calls[i + gap];
                calls[i + gap] = temp;
                swapped = 1;
            }
        }
    }
}

void printCalls(struct Call calls[], int n) {
    printf("Lista de Chamadas:\n");
    for (int i = 0; i < n; i++) {
        printf("Número: %d, Nome: %s\n", calls[i].callNumber, calls[i].callerName);
    }
}

int main() {
    struct Call calls[MAX_CALLS];

    strcpy(calls[0].callerName, "Maria");
    calls[0].callNumber = 1;

    strcpy(calls[1].callerName, "João");
    calls[1].callNumber = 2;

    strcpy(calls[2].callerName, "Ana");
    calls[2].callNumber = 3;

    strcpy(calls[3].callerName, "Pedro");
    calls[3].callNumber = 4;

    strcpy(calls[4].callerName, "Carlos");
    calls[4].callNumber = 5;

    int n = sizeof(calls) / sizeof(calls[0]);

    printf("Lista de Chamadas Original:\n");
    printCalls(calls, n);

    printf("\nOrdenando a lista de chamadas por ordem alfabética usando Comb Sort...\n");
    combSort(calls, n);

    printf("\nLista de Chamadas Ordenada:\n");
    printCalls(calls, n);

    return 0;
}
