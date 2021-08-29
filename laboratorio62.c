#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int primo(long long int numero){
    int ePrimo = 0;
    if(numero<2){
        ePrimo = -1;
    }
    else if (numero  == 2)
    {
        ePrimo = 1;
    }
    
    else if (numero%2!=0)
    {
        ePrimo = 1;
        for (int i = 3; (double)i <= sqrt(numero); i+=2)
        {
            if (numero%i == 0){
                ePrimo = 0;
                break;
            }    
        
        }
    
    }
    return ePrimo;
}

int main (){
    long long int input;
    while (scanf("%llu", &input)!=EOF)
    {   
        printf("%d\n",primo(input));
    }
    
    return 0;
}
