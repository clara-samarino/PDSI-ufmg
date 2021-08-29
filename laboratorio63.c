#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

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
long long int somaPrimo(int quantidade){
    int contador=0;
    long long int somaPrimos=0;
    long long int i;
    if (quantidade==1)
    {
        somaPrimos = 2;
    }
    else if (quantidade<1)
    {
        somaPrimos = 0;
    }
    
    else
    {   
        somaPrimos = 2;
        for (i = 3; contador < quantidade-1; i=i+2)
        {
            if (primo(i)==1)
            {

                contador++;
                somaPrimos+=i;

            }
        
        }
    }
    return somaPrimos;
}

int main (){
    int input;
    while (scanf("%d", &input)!=EOF)
    {   
        printf("%llu\n",somaPrimo(input));
    }
    
    return 0;
}