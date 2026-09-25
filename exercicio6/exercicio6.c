#include <stdio.h>
#include <stdlib.h>



void preencher_notas(float m[5][3])
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite a nota do aluno %d, avaliacao %d: ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }
    }
}

void calcular_medias_alunos(float m[5][3])
{
    int i, j;
    float soma;
    float media;

    for (i = 0; i < 5; i++)
    {
        soma = 0;

        for (j = 0; j < 3; j++)
        {
            soma = soma + m[i][j];
        }

        media = soma / 3;

        printf("Media do aluno %d: %.2f\n", i + 1, media);
    }
}

void maior_nota_avaliacao(float m[5][3], int col_avaliacao)
{
    int i;
    float maior;

    maior = m[0][col_avaliacao];

    for (i = 1; i < 5; i++)
    {
        if (m[i][col_avaliacao] > maior)
        {
            maior = m[i][col_avaliacao];
        }
    }

    printf("Maior nota da avaliacao %d: %.2f\n", col_avaliacao + 1, maior);
}

int main()
{
    float notas[5][3];
    int avaliacao;

    preencher_notas(notas);

    printf("\nMedias dos alunos:\n");
    calcular_medias_alunos(notas);

    printf("\nDigite qual avaliacao deseja verificar (1, 2 ou 3): ");
    scanf("%d", &avaliacao);

    maior_nota_avaliacao(notas, avaliacao - 1);

    return 0;
}