#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int soma(int vetor[], int tamanho_vetor){
    
    int total=0;
    if(tamanho_vetor!=0){
        total = vetor[tamanho_vetor-1] + soma(vetor,tamanho_vetor-1);
    }
    return total;
}

int main(){
    int quantidade;
    char quant[5];
    fgets(quant, 5, stdin);
    sscanf(quant,"%d", &quantidade);
    int *ponteiro;
    ponteiro = (int*)malloc(quantidade*sizeof(int));

    for (int i = 0; i < quantidade; i++)
    {
        //fgets(quant, 5, stdin);
        scanf("%d", &ponteiro[i]);
    }

    printf("%d",soma(ponteiro, quantidade));
    fflush(stdout);
    return 0;
}