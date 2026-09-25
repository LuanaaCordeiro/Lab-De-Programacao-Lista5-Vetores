#include <stdio.h>
#include<stdlib.h>

int main()
{
    int matriz[4][4];
    int linha;
    int coluna;
    int soma_principal = 0;
    int soma_secundaria = 0;
    int maior;

    printf("Digite os valores da matriz:\n");

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    maior = matriz[0][0];

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            if (linha == coluna)
            {
                soma_principal = soma_principal + matriz[linha][coluna];

                if (matriz[linha][coluna] > maior)
                {
                    maior = matriz[linha][coluna];
                }
            }

            if (linha + coluna == 3)
            {
                soma_secundaria = soma_secundaria + matriz[linha][coluna];
            }
        }
    }

    printf("\nSoma da diagonal principal: %d\n", soma_principal);
    printf("Soma da diagonal secundaria: %d\n", soma_secundaria);
    printf("Maior elemento da diagonal principal: %d\n", maior);

    printf("\nMatriz resultante:\n");

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf("%d ", matriz[linha][coluna] * maior);
        }

        printf("\n");
    }

    return 0;
}