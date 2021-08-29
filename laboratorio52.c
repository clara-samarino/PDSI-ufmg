#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
struct endereco
{
    char rua[50];
    int numero;
    char estado[50];

};

struct cadastro
{
    char nome[50];
    int idade;
    float salario;
    struct endereco end;
};


int main (){
    char readKey[8];
    struct cadastro cad[5];
    int counter = 0;
    int validator = 0;
    int lengthString;
    char name[50];

    char nameTrash[50], streetTrash[50], stateTrash[50];
    int oldTrash, houseNumberTrash;
    float salaryTrash;
    
    int i; //usado no for
    while (scanf("%s", readKey)!=EOF)
    {
        
        if(strcmp(readKey,"inserir") == 0){
            if (counter < 5)
            {
                scanf("%s %d %f %s %d %s", cad[counter].nome, &cad[counter].idade, &cad[counter].salario, cad[counter].end.rua, &cad[counter].end.numero, cad[counter].end.estado);
                printf("Registro %s %d %.2f %s %d %s inserido\n",cad[counter].nome, cad[counter].idade, cad[counter].salario, cad[counter].end.rua, cad[counter].end.numero, cad[counter].end.estado);
                counter++;
            }
            else
            {
                scanf("%s %d %f %s %d %s", nameTrash,&oldTrash,&salaryTrash, streetTrash, &houseNumberTrash, stateTrash);
                printf("Espaco insuficiente\n");
            }
            
            

        }   
        else if(strcmp(readKey,"mostrar") == 0){
            validator = 0;
            scanf("%s", name);
            for (i = 0; i < 5; i++)
            {
                lengthString = strlen(name);
                if (strncmp(name, cad[i].nome, 5) == 0)
                {
                    printf("Registro %s %d %.2f %s %d %s\n",cad[i].nome, cad[i].idade, cad[i].salario, cad[i].end.rua, cad[i].end.numero, cad[i].end.estado);
                    validator = 1;
                    break;
                }
                
            }
            if (validator == 0)
            {
                printf("Registro ausente\n");
            }
            
        }
        else if (strcmp(readKey,"alterar") == 0)
        {
            scanf("%s %d %f %s %d %s", nameTrash,&oldTrash,&salaryTrash, streetTrash, &houseNumberTrash, stateTrash);
            validator = 0;
            for (i = 0; i < 5; i++)
            {
                lengthString = strlen(nameTrash);
                if (strncmp(nameTrash, cad[i].nome, 5) == 0)
                {
                    cad[i].idade = oldTrash;
                    cad[i].salario = salaryTrash;
                    strcpy(cad[i].end.rua,streetTrash);
                    strcpy(cad[i].end.estado, stateTrash);
                    cad[i].end.numero = houseNumberTrash;
                    validator = 1;
                    printf("Registro %s %d %.2f %s %d %s alterado\n",cad[i].nome, cad[i].idade, cad[i].salario, cad[i].end.rua, cad[i].end.numero, cad[i].end.estado);
            
                }   
            }
            if (validator == 0)
            {
                printf("Registro ausente para alteracao");
            }
               

        }
        
    
    }
    return 0;
}



