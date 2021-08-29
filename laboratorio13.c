#include <stdio.h>
#include <stdlib.h>
int main (){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if (x%y==0 && x%z==0)
    {
        printf("O número é divisível\n");
    }
    else{
        printf("O número não é divisível\n");
    }
    return 0;
}