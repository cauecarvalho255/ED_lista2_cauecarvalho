#include <stdio.h>

int main(){
    
    float matriz[3][4];
    float soma[3] = {0, 0, 0};
    int i, j;
    
    printf("Insira os valores da matriz: \n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("[%i][%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("===ELEMENTOS DA MATRIZ===\n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("[%.2f]", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    printf("Soma de cada linha: \n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            soma[i] += matriz[i][j];
        }
    }
    
    for(i = 0; i < 3; i++){
            printf("Soma da linha %i: %.2f\n", i, soma[i]);
    }
    
    return 0;
}
