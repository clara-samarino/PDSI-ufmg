#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, i = 1,cont2 = 0, cont3 = 0, cont5 = 0, contMult = 0;
    scanf("%d", &x);
    while (i<=x)
    {
        if(i%2==0){
            cont2++;
        }
        if (i%3==0)
        {
            cont3++;
        }
        if (i%5==0)
        {
            cont5++;
        }
        if(i%2==0 && i%3==0 && i%5==0){
            contMult++;

        }
        i = i+1;
        
    }
    printf("Múltiplos de 2: %d\n",cont2);
    printf("Múltiplos de 3: %d\n",cont3);
    printf("Múltiplos de 5: %d\n",cont5);
    printf("Múltiplos de todos: %d\n",contMult);
    
}