#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long int fibonacci(int valor){
    if ((valor == 1) || (valor == 2))
    {
        return 1;
    }
    else
    {
        return(fibonacci(valor - 1) + fibonacci(valor - 2));
    }
    
    
    
}

int main(){
    int valor;
    scanf("%d", &valor);
    printf("%ld", fibonacci(valor));

    return 0;
}