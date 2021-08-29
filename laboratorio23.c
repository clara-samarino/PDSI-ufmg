#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int i = 233;
    do{
        
        if (i>=300 && i<=400)
        {
            printf("%d\n",i);
            i += 3;
        }
        else
        {
            printf("%d\n",i);
            i += 5;
        }
        
        
    }while (i <= 457);
    
}