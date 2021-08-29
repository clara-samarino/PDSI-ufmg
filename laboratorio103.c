#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void soma(int *pt1, int *pt2, int *pt3, int qt){
    for (int i = 0; i < qt; i++)
    {
        pt3[i] = pt1[i] + pt2[i];
    }
    
}
void imprimirVet(int *vetor, int quantidade){
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d\n", vetor[i]);
    }
    
}
int main(){
    int *ponteiro1, *ponteiro2, *ponteiro3;
    char linha[5];
    int valor, quantidade;
    fgets(linha,5,stdin);
    quantidade = atoi(linha);
    ponteiro1 = (int*)malloc(quantidade*sizeof(int));
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &ponteiro1[i]);
    }
    ponteiro2 = (int*)malloc(quantidade*sizeof(int));
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &ponteiro2[i]);
    }
    ponteiro3 = (int*)malloc(quantidade*sizeof(int));
    soma(ponteiro1, ponteiro2, ponteiro3, quantidade);
    imprimirVet(ponteiro3, quantidade);
    free(ponteiro1);
    free(ponteiro2);
    free(ponteiro3);
    return 0;
}