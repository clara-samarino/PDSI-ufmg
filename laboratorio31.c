#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int inicio, final,i;
    int ePrimo;
    scanf("%d", &inicio);
    scanf("%d", &final);
    if (inicio>= 0 && inicio <3 && final>=2)
    {
        printf("2\n");
        inicio = 3;
    }
    
    if(inicio%2==0){
        inicio += 1;
    }

    if (final > 2)
    {
        for (i = inicio; i <= final; i+=2)
        {
            ePrimo = 1;
        
            if (i%2 != 0){
            
                for (int j = 3; (double)j <= sqrt(i); j+=2)
                {
                    if (i%j == 0){
                        ePrimo = 0;
                        break;
                    }
                
                }
                if (ePrimo == 1)
                {
                    printf("%d\n", i);
                }
            
            }
        
        }
    }
    
    return 0;
}