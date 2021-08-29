#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int vet[800];
    int anterior = 0;
    int numFibonacci = 1;
    int aux;
    int number;
    vet[0] = 0;
    vet[1] = 1;
    for (int i = 2; i < 801; i++)
    {
        aux = numFibonacci;
        numFibonacci += anterior;
        vet[i] = numFibonacci;
        anterior = aux;
    }
    do
    {
        scanf("%d", &number);
        if (number>=0 && number <800)
        {
            printf("%d\n", vet[number]);
        }
            
    } while (number>=0 && number <800);
    
    
    
    
    return 0;
}