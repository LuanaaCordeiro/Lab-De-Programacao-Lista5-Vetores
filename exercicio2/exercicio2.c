#include <stdio.h>

int main() {
   float notas[10];
   float media = 0;
   float total;
   int i;

    for (i=0;i<10;i++){
        printf("Digite a nota");
        scanf("%f", &notas[i]);
    }

    for (i=0;i<10;i++){
        total = total + notas[i];
    }

    
    media = total / 10;
    printf("A media total eh: %f", media);

    return 0;
}