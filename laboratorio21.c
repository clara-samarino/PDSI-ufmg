#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x0, x1;
    scanf("%d",&n);
    scanf("%d",&x0);
    scanf("%d",&x1);
    int vet[n+1];
    vet[0] = x0;
    vet[1] = x1;
    printf("X0: %d\n", vet[0]);
    printf("X1: %d\n", vet[1]);
    for (int i = 2; i < n+1; i++)
    {
        vet[i] = 4*vet[i-1] - 2*vet[i-2];
        printf("X%d: %d\n", i, vet[i]);
    }
    
    
}