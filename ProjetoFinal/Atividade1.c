#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    int idade;
    char nome[100];
    char sexo[1];
    float mensalidade;
};

int main() {
    struct aluno alunos[3];
    int i, contmas = 0, idade_maxima;
    float total_mensalidade = 0, mediamensalidade, menor_mensalidade;

    for (i = 0; i < 3; i++) {
        printf("\n========== Dados Cadastrais do aluno(a) %d ==========\n\n", i + 1);
        printf("Digite o nome do aluno(a): \n");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Qual a idade do aluno(a): \n");
        scanf("%d", &alunos[i].idade);

        printf("Digite o sexo do aluno(a) M/F: \n");
        scanf(" %[^\n]", alunos[i].sexo);
        if (strcmp(alunos[i].sexo, "M") == 0 || strcmp(alunos[i].sexo, "m") == 0) {
            contmas++;
        }

        printf("Digite a mensalidade do aluno(a): \n");
        scanf("%f", &alunos[i].mensalidade);
        total_mensalidade += alunos[i].mensalidade;

        if (i == 0 || alunos[i].mensalidade < menor_mensalidade) {
            menor_mensalidade = alunos[i].mensalidade;
        }

        if (i == 0 || alunos[i].idade > idade_maxima) {
            idade_maxima = alunos[i].idade;
        }
    }
    mediamensalidade = total_mensalidade/3;

    system("cls");
    printf("========== Informações finais ==========\n");
    printf("Menor mensalidade foi de %.2f\n", menor_mensalidade);
    printf("Quantidade de alunos que são do sexo Masculino('M'): %d\n", contmas);
    printf("Média das mensalidades: %.2f\n", mediamensalidade);
    printf("Aluno(a) mais velho: %s, %d anos\n", alunos[i-1].nome, idade_maxima);
    
    return 0;
}