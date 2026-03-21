#include <stdio.h>

int main() {
    
    int matriz[3][3];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("Matriz completa:\n");
   
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%i", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Elementos fora da diagonal principal:\n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++) {
            if(i != j) {
                printf("%i ", matriz[i][j]);
            }
        }
    }

    printf("\n");
    printf("Elementos fora da diagonal secundaria:\n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i + j != 2) {
                printf("%i ", matriz[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}
