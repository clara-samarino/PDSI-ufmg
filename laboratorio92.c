#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void imprime(int vetor[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
void multiplica(int vetor[], int n, double v){
    for (int i = 0; i < n; i++)
    {
        vetor[i] = vetor[i]*v;
    }
    
}

int main(){
    int tamanho;
    double valorMultiplicado;
    char quant[5], numbersChar[5];
    fgets(quant, 5, stdin);
    sscanf(quant,"%d", &tamanho);
    int vet[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        fgets(numbersChar, 5, stdin);
        sscanf(numbersChar,"%d", &vet[i]);
    }
    imprime(vet, tamanho);
    fgets(quant, 5, stdin);
    sscanf(quant,"%lf", &valorMultiplicado);
    multiplica(vet, tamanho, valorMultiplicado);
    imprime(vet, tamanho);
    multiplica(vet, tamanho, 1/valorMultiplicado);
    imprime(vet, tamanho);
    return 0;
}