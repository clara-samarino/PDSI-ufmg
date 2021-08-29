#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    char nTelefone[20];
}agenda;
void inserir(agenda registro, agenda *a, int*nregistro);
void alterar(agenda registro, agenda a[100]);
void excluir(char nome[50], agenda a[100], int *nregistro);
void exibir(char nome[50], agenda a[100]);

int main(){
    char fname[100];
    fgets(fname, 100, stdin);
    fname[strlen(fname)-1] = '\0';
    FILE *p = fopen(fname,"rb");
    agenda ag[100];
    int quantregistro;
    quantregistro = fread(ag, sizeof(agenda),100,p);
    
    if (p == NULL)
    {
        perror("Erro: ");
        return EXIT_FAILURE;
    }
    
    fclose(p);
    return EXIT_SUCCESS;
}