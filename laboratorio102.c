#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void imprimirMatriz(int **matriz, int qLinha, int qColuna){
    for (int i = 0; i < qLinha; i++)
    {
        for (int j = 0; j < qColuna; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        
    }
    
}

int main(){
    int qLinha, qColuna;
    char quant[5];
    fgets(quant, 5, stdin);
    sscanf(quant,"%d", &qLinha);
    fgets(quant, 5, stdin);
    sscanf(quant,"%d", &qColuna);
    int **matriz;
    matriz = (int**)malloc(qLinha*sizeof(int));
    for (int i = 0; i < qLinha; i++)
    {
        matriz[i] = (int*)malloc(qColuna*sizeof(int));
       for (int j = 0; j < qColuna; j++)
       {
            scanf(" %d", &matriz[i][j]);
       }
    }
    imprimirMatriz(matriz, qLinha, qColuna);
    for (int i = 0; i < qLinha; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    
    
    return 0;
}