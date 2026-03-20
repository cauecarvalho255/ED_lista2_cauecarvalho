#include <stdio.h>

int main(){
    
    int matriz[3][3];
    int maior;
    int menor;
    int i, j;
    
    printf("Insira os elementos da matriz: \n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    maior = matriz[0][0];
    menor = matriz[0][0];

    printf("===ELEMENTOS DA MATRIZ===\n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%i]", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
            
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }
    
    printf("\n");
    printf("O MAIOR numero da matriz eh: [%i]\n", maior);
    printf("O MENOR numero da matriz eh: [%i]\n", menor);
    
    return 0;
}
