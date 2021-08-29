#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

void media(double vet[], int n, int*i){
    
    double soma, media, nProximo;
    int indice;

    for (int i = 0; i < n; i++)
    {
        soma+= vet[i];
    }
    media = soma/n;
    nProximo = vet[0];
    for (int i = 0; i < n; i++)
    {
        if (abs((media - nProximo)) > abs((media - vet[i])))
        {
            nProximo = vet[i];
            indice = i;
        }
        
    }
    *i = indice;
    printf("%d", *i);
        
}
int main(){
    int entrada; 
    int indice = 0;
    char buffer[10];
    double valores;
    fgets(buffer,10, stdin);
    sscanf(buffer, "%d\n", &entrada);
    double vetor[entrada];
    for (int i = 0; i < entrada; i++)
    {
        fgets(buffer,10, stdin);
        sscanf(buffer, "%lf\n", &vetor[i]);
        
    }
    media(vetor,entrada,&indice);
    

    return 0;
}