#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int main(){
    char str[30];
    char str2[30];
    int tamanho1, tamanho2;
    int verificador = 0;
    setbuf(stdin, NULL); //limpa o buffer do teclado
    fgets(str,30,stdin); //lê do teclado
    fgets(str2,30,stdin);
    tamanho1 = strlen(str);
    tamanho2 = strlen(str2);
    for (int i = 0; i < tamanho1; i++)
    {

        if (str[i] = str2[0])
        {
            for (int j = 0; j < tamanho2; j++)
            {
                if (str[i+j] == str2[j])
                {
                    verificador = 1;
                }
                else
                {
                    verificador = 0;
                    break;
                }
                
            }
            
        }
        if (verificador == 1)
        {
            printf("É substring");
            break;
        }
        
    }
    if(verificador == 0)
    {
        printf("Não é substring");
    } 
    
    return 0;
}