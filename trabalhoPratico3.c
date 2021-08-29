#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Pessoa{
    char nome[50];
    int idade;
    struct Pessoa *filhos;
    int numfilhos;
};


struct Pessoa* buscaPessoa(struct Pessoa *pessoaAsc, char nomeProcurado[], int nivel, int imprimeNivel){

    struct Pessoa* buffer = NULL;

    if (strcmp(pessoaAsc->nome,nomeProcurado)==0)
    {
        if(imprimeNivel==1){
            printf("%d\n",nivel);
        }

        return pessoaAsc;
    }

    for (int i = 0; i < pessoaAsc->numfilhos; i++)
    {
        buffer = buscaPessoa(pessoaAsc->filhos+i,nomeProcurado,nivel+1,imprimeNivel);
        if(buffer) {
            return buffer;
        }
    }

    return NULL;
    
}


void cadastro(struct Pessoa *pPessoa, char nomeP[], int idade,char nomeBuscado[]){
    
    int quantfilhos;
    struct Pessoa *buffer = NULL;
    
    if (strcmp(nomeBuscado,"NULL")!=0){
        buffer = buscaPessoa(pPessoa, nomeBuscado, 0, 0);
        quantfilhos = (*buffer).numfilhos;
        if (buffer!=NULL){
            
            if ((*buffer).numfilhos == 0)
            {
                (*buffer).filhos = (struct Pessoa*)malloc((quantfilhos+1)*sizeof(struct Pessoa));
            }
            else
            {
                (*buffer).filhos = (struct Pessoa*)realloc((*buffer).filhos,(quantfilhos+1)*sizeof(struct Pessoa));
            }
            
            strcpy((*buffer).filhos[quantfilhos].nome, nomeP);
            (*buffer).filhos[quantfilhos].idade = idade;
            (*buffer).filhos[quantfilhos].numfilhos=0;
            (*buffer).numfilhos++;
        }
    }
    
    
}

void imprimirParentesco(struct Pessoa *pPessoa, char p1[], char p2[]){
    struct Pessoa *buffer;
    struct Pessoa *buffer2;
    buffer = buscaPessoa(pPessoa, p2, 0, 0);
    buffer2 = buscaPessoa(buffer, p1, 0, 1);

}

int desalocar(struct Pessoa *pessoaAsc){

    int qtFilhosLimpos = 0;
    int qtFilho = pessoaAsc->numfilhos;

    if ((pessoaAsc->numfilhos)==0)
    {
        //free(pessoaAsc);
        return 1;
    }

    for (int i = 0; i < qtFilho; i++)
    {
        
        qtFilhosLimpos = qtFilhosLimpos + desalocar(pessoaAsc->filhos+i);
        if (qtFilhosLimpos == qtFilho)
        {
            //pessoaAsc->numfilhos--;
            free(pessoaAsc->filhos);
            return 1;
        }
       
    }

    
    
}

int main(){
    int n, m, idade;
    struct Pessoa primeiroRegistro;
    char quantidade[5],linha[100],nomeBusca[50], nomeP[50];
    
    fgets(quantidade,5,stdin);
    n = atoi(quantidade);
    
    fgets(linha, 100, stdin);
    sscanf(linha,"%s %d %s\n", primeiroRegistro.nome, &primeiroRegistro.idade, nomeBusca);
    primeiroRegistro.numfilhos = 0;
    

    for (int i = 1; i < n; i++)
    {
        fgets(linha, 100, stdin);
        sscanf(linha,"%s %d %s\n", nomeP, &idade, nomeBusca);
        cadastro(&primeiroRegistro, nomeP, idade, nomeBusca);
    }
    fgets(quantidade,5,stdin);
    m = atoi(quantidade);
    for (int i = 0; i < m; i++)
    {
        fgets(linha, 100, stdin);
        sscanf(linha, "%s %s\n", nomeP, nomeBusca);
        imprimirParentesco(&primeiroRegistro, nomeP, nomeBusca);
    }
    desalocar(&primeiroRegistro);
    
    return 0;
}