#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char str[100];
    char c1, c2;
    int tamanho;
    setbuf(stdin, NULL); //limpa o buffer do teclado
    gets(str); //lê do teclado
    scanf("%s", &c1);
    scanf("%s", &c2);
    tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++)
    {
        if (str[i] == c1)
        {
            str[i] = c2;
            break;
        }
        
    }
    printf("%s", str);
    
    
    
    return 0;
}