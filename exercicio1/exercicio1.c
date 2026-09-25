#include <stdio.h>

int main() {
    int vetor[8];
    int i;
    

    for (i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 7; i >= 0; i--){
        printf("O indice eh [%d] e o numero em sua posicao eh %d \n", i, vetor[i]);
    }

    return 0;
}