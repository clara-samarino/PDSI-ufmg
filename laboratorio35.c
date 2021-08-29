#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int quantLinhas, quantColunas, maiorValor , inputKey;
    maiorValor = 0;
    scanf("%d", &quantLinhas);
    scanf("%d", &quantColunas);
    
    for (int i = 0; i < quantLinhas; i++)
    {
        for (int j = 0; j < quantColunas; j++)
        {
            scanf(" %d", &inputKey);
            if(maiorValor<inputKey){
                maiorValor = inputKey;
            }
        }
        
    }
    printf("%d", maiorValor);
    
    return 0;
}