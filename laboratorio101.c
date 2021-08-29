#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void imprimirVet(int *vetor, int quantidade){
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d\n", vetor[i]);
    }
    
}
int main(){
    int quantidade;
    char quant[5];
    int *ponteiro;
    fgets(quant, 5, stdin);
    sscanf(quant,"%d", &quantidade);
    
    ponteiro = (int*)malloc(quantidade*sizeof(int));
    if (ponteiro == NULL)
    {
        printf("erro");
        exit(1);
    }
    
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &ponteiro[i]);
    }
    imprimirVet(ponteiro, quantidade);
    free(ponteiro);
    
    return 0;
}