#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>


void primo(int m, int *p1, int *p2){
    
    int menor = 2, maior, ePrimo;
    
    for (int i = m - 1; i > 1; i--)
    {
        if (i%2!=0)
        {
            ePrimo = 1;
            for (int j = 3; j <= i/2; j+=2)
            {
                if (i%j == 0){
                    ePrimo = 0;
                    break;
                }    
        
            }
            if (ePrimo == 1)
            {
                menor = i;
                break;    
            }
        }
        
        
    }
    for (int i = m+1; ; i++)
    {
        if (i%2!=0)
        {
            ePrimo = 1;
            for (int j = 3; j <= i/2; j+=2)
            {
                if (i%j == 0){
                    ePrimo = 0;
                    break;
                }    
        
            }
            if (ePrimo == 1)
            {
                maior = i;
                break;    
            }
        }
        
    }
    *p1 = menor;
    *p2 = maior;
    printf("%d\n%d",*p1, *p2);
    
    
    
}

int main(){
    char num[10];
    int numero;
    int menor = 0, maior = 0;
    fgets(num,10,stdin);
    sscanf(num,"%d",&numero);
    primo(numero, &menor, &maior);
    return 0;
}