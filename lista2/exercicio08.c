#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;

    printf("Insira os elementos da matriz: \n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    printf("\n");
    printf("Matriz completa:\n");
   
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nElementos abaixo da diagonal principal:\n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i > j){
                printf("%i ", matriz[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}
