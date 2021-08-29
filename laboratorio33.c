#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int vet[10];
    int vet2[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
        vet2[9-i] = vet[i];
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vet2[i]);
    }
    return 0;
}