#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15];
    int i;
    int x;
    int encontrado = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &x);

    for (i = 0; i < 15; i++)
    {
        if (vetor[i] == x)
        {
            printf("O numero %d esta na posicao [%d]\n", x, i);
            encontrado++;
        }
    }

    if (encontrado == 0){
        printf("O numero nao esta presente no vetor");
    } else{
        printf("O numero aparece %d vezes no vetor", encontrado);
    }
}