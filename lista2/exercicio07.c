#include <stdio.h>

int main(){
    
    int matriz[4][4];
    int i, j;
    
    printf("Insira os valores da matriz: \n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    printf("\n");
    printf("===ELEMENTOS DA MATRIZ===\n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%i]", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Elementos acima da diagonal principal:\n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i < j) {
                printf("%i ", matriz[i][j]);
            }
        }
    }
    
    printf("\n");
    
    return 0;
}
