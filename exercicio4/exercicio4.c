#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int transposta[3][3];
    int linha;
    int coluna;
    

     printf("Digite os valores da matriz A:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            scanf("%d", &a[linha][coluna]);
        }
    }

    printf("Digite os valores da matriz B:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            scanf("%d", &b[linha][coluna]);
        }
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            c[linha][coluna] = a[linha][coluna] + b[linha][coluna];
        }
    }

       for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            transposta[coluna][linha] = a[linha][coluna];
        }
    }

    printf("\nMatriz soma C:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", c[linha][coluna]);
        }

        printf("\n");
    }

    printf("\nMatriz transposta de A:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", transposta[linha][coluna]);
        }

        printf("\n");
    }


    return 0;
}