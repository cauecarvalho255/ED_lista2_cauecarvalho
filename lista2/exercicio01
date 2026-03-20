#include <stdio.h>

int main() {
    
    int matriz[3][3];
    int i, j;
    int soma = 0;

    printf("Insira os numeros da matriz\n");
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("===ELEMENTOS DA MATRIZ===\n");
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("[%i]", matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] % 2 != 0) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nA soma dos numeros impares eh: %i\n", soma);

    return 0;
}
