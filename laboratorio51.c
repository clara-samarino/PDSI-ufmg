#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

struct cadastro
{
    char nome[50];
    int idade;
    float salario;
};

int main (){
    char readKey[8];
    struct cadastro cad[4];
    int counter = 0;
    int validator = 0;
    int lengthString;
    char name[50];

    char nameTrash[50];
    int oldTrash;
    float salaryTrah;
    
    int i; //usado no for
    while (scanf("%s", readKey)!=EOF)
    {
        
        if(strcmp(readKey,"inserir") == 0){
            if (counter < 4)
            {
                scanf("%s %d %f", cad[counter].nome, &cad[counter].idade, &cad[counter].salario);
                printf("Registro %s %d %.2f inserido\n",cad[counter].nome, cad[counter].idade, cad[counter].salario);
                counter++;
            }
            else
            {
                scanf("%s %d %f", nameTrash,&oldTrash,&salaryTrah);
                printf("Espaco insuficiente\n");
            }
            
            

        }   
        if(strcmp(readKey,"mostrar") == 0){
            validator = 0;
            scanf("%s", name);
            for (i = 0; i < 4; i++)
            {
                lengthString = strlen(name);
                if (strncmp(name, cad[i].nome, 5) == 0)
                {
                    printf("Registro %s %d %.2f\n",cad[i].nome, cad[i].idade, cad[i].salario);
                    validator = 1;
                    break;
                }
                
            }
            if (validator == 0)
            {
                printf("Registro ausente\n");
            }
            
            

        }
    
    }
    return 0;
}

