#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int main(){
    char str[100];
    char str2[100];
    int tamanho;
    setbuf(stdin, NULL); //limpa o buffer do teclado
    gets(str); //lê do teclado
    tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++)
    {
        str2[i] = str[tamanho -1 -i];
    }
    printf("%s", str2);
    
    return 0;
}