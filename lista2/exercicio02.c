#include <stdio.h>

int main(){
    
    int matriz[4][4];
    int soma[4] = {0, 0, 0, 0};
    int i, j;
    
    printf("Insira os valores da matriz:");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    printf("===ELEMENTOS DA MATRIZ===\n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
        printf("[%i]", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(j = 0; j < 4; j++){
        for(i = 0; i < 4; i++){
            soma[j] += matriz[i][j];
        }
    }
    
    printf("Soma de cada coluna:\n");
    
    for(j = 0; j < 4; j++){
        printf("Coluna %i: %i\n", j, soma[j]);
    }
    
    return 0;
}
