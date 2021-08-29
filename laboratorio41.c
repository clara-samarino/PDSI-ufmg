#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

int main(){
    char str[100];
    char str2[100];
    setbuf(stdin, NULL); //limpa o buffer do teclado
    gets(str); //lê do teclado
    //strlen(str); retorna o tamanho da palavra
    //strcpy(str2,str); copia de str para str2
    gets(str2);
    strcat(str,str2);
    printf("%s", str);
    
    return 0;
}