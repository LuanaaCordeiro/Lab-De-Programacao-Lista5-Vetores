#include <stdio.h>
#include <stdlib.h>

int eh_quadrado_magico(int m[3][3])
{
    int i, j;
    int soma;
    int soma_magica;
    soma_magica = m[0][0] + m[0][1] + m[0][2];

    for (i = 0; i < 3; i++)
    {
        soma = 0;

        for (j = 0; j < 3; j++)
        {
            soma = soma + m[i][j];
        }

        if (soma != soma_magica)
        {
            return 0;
        }
    }

    for (j = 0; j < 3; j++)
    {
        soma = 0;

        for (i = 0; i < 3; i++)
        {
            soma = soma + m[i][j];
        }

        if (soma != soma_magica)
        {
            return 0;
        }
    }

  
    soma = m[0][0] + m[1][1] + m[2][2];

    if (soma != soma_magica)
    {
        return 0;
    }
    soma = m[0][2] + m[1][1] + m[2][0];

    if (soma != soma_magica)
    {
        return 0;
    }

    return 1;
}

int main()
{
    int matriz[3][3];
    int i, j;
    int resultado;

    printf("Digite os valores da matriz 3x3:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    resultado = eh_quadrado_magico(matriz);

    if (resultado == 1)
    {
        printf("A matriz e um quadrado magico!\n");
    }
    else
    {
        printf("A matriz nao e um quadrado magico.\n");
    }

    return 0;
}