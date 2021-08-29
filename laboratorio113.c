#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int quantcaractere(char word[], char letter, int indice){
    int countLetter = 0;
    if (indice >= 0)
    {
        countLetter = quantcaractere(word, letter, indice - 1);
        if (word[indice] == letter)
        {
            return countLetter + 1;
        }
        else
        {
            return countLetter;
        }
        
        
    }
    else
    {
        return 0;
    }
    
    
}

int main(){
    char palavra[30];
    char caractere;
    fgets(palavra, 30, stdin);
    caractere = fgetc(stdin);
    palavra[strlen(palavra) - 1] = '\000';
    int tamanho = strlen(palavra);
    
    printf("%d\n",quantcaractere(palavra, caractere, tamanho - 1));
    return 0;
}