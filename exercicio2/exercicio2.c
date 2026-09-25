#include <stdio.h>

int main()
{
    float notas[10];
    float media = 0;
    float total = 0;
    int i;
    float maior = 0;
    int primeiro = 0;
    float menor = 0;
    int aprovados = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 10; i++)
    {
        total = total + notas[i];

        if (notas[i] > maior)
        {
            maior = notas[i];
        }

        if (primeiro == 0)
        {
            primeiro = 1;
            menor = notas[i];
        }

        if (notas[i] < menor)
        {
            menor = notas[i];
        }
    }

    media = total / 10;

    for (i = 0; i < 10; i++)
    {
        if (notas[i] >= media)
        {
            aprovados++;
        }
    }
    printf("A media total eh: %f /n", media);
    printf("A maior nota da turma foi: %f /n", maior);
    printf("A menor nota da turma foi: %f /n", menor);
    printf("%d alunos foram aprovados", aprovados);

    return 0;
}