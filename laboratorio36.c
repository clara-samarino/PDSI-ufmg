#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int quantLinhas, quantColunas, novoValor , inputKey;
    scanf("%d", &quantLinhas);
    scanf("%d", &quantColunas);
    int matriz[quantLinhas][quantColunas];
    
    for (int i = 0; i < quantLinhas; i++)
    {
        for (int j = 0; j < quantColunas; j++)
        {
            scanf(" %d", &inputKey);
            matriz[i][j] = inputKey*-1;
        }
            
    }
    for (int i = 0; i < quantLinhas; i++)
    {
        for (int j = 0; j < quantColunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}