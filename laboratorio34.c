#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int quantidade, quantidade2;
    
    scanf("%d", &quantidade);
    int vet[quantidade];
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &vet[i]);
    }
    
    scanf("%d", &quantidade2);
    int vet2[quantidade2];
    
    for (int i = 0; i < quantidade2; i++)
    {
        scanf("%d", &vet2[i]);
            
    }
    for (int i = 0; i < quantidade2; i++)
    {
        for (int j = 0; j < quantidade; j++)
        {
            if (vet[j]==vet2[i])
            {
                printf("%d\n", vet2[i]);
            }
            
        }
        
        
    }
    
    return 0;
}