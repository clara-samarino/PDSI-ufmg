#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,aux=0;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        aux+=i;
    }
    printf("%d",aux);
}