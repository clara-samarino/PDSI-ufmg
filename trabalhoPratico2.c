#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct cadastro{
    char nome[50];
    float salario;
    char data[12];
    char utmData[9];
    char departamento[20];
};

void utmDate(char *ptbrDate, char *utmDate){
   
    utmDate[0]=ptbrDate[6];
    utmDate[1]=ptbrDate[7];
    utmDate[2]=ptbrDate[8];
    utmDate[3]=ptbrDate[9];

    utmDate[4]=ptbrDate[3];
    utmDate[5]=ptbrDate[4];

    utmDate[6]=ptbrDate[0];
    utmDate[7]=ptbrDate[1];
    utmDate[8]='\000';

}
void quickSortPorNome(struct cadastro *registro, int esq, int dir){
    int i,j;
    char x[50];
    struct cadastro aux;
    int sizeCadastro = sizeof(struct cadastro);
    strcpy(x,registro[(esq+dir)/2].nome);
    i = esq;
    j = dir;
    do
    {
        
        while (strcmp(x,registro[i].nome)>0 && i<dir)
        {
            i++;
        }
        while (strcmp(x,registro[j].nome)<0 && j>esq)
        {
            j--;
        }
        if (i<=j)
        {
            
            memcpy(&aux,&registro[i],sizeCadastro);
            memcpy(&registro[i],&registro[j],sizeCadastro);
            memcpy(&registro[j],&aux,sizeCadastro);
            i++;
            j--;
        } 
        
    } while (i<=j);

    if (esq < j)
    {
        quickSortPorNome(registro, esq, j);
    }
    if (i < dir)
    {
        quickSortPorNome(registro, i, dir);
    }
     
};
void ExportarLista(struct cadastro registro[], int qRegistro, char *nomeArquivo){

    FILE *newArq;
    newArq = fopen(nomeArquivo, "w");
    for (int i = 0; i < qRegistro; i++)
    {
        fprintf(newArq, "%s\n", registro[i].nome);
        fprintf(newArq, "%.2f\n", registro[i].salario);
        fprintf(newArq, "%s\n", registro[i].data);
        fprintf(newArq, "%s\n", registro[i].departamento);
    }
    
    fclose(newArq);
    
};
void questao1(struct cadastro *registro,int quantFunc, char *aqSaida){
    quickSortPorNome(registro,0,quantFunc-1);
    ExportarLista(registro,quantFunc,aqSaida);
}
void questao2(struct cadastro *registro,int quantFunc, char *departamento){
    quickSortPorNome(registro,0,quantFunc-1);
    for (int i = 0; i < quantFunc; i++)
    {
        if (strcmp(registro[i].departamento, departamento)==0)
        {
            printf("%s\n", registro[i].nome);
            printf("%.2f\n", registro[i].salario);
            printf("%s\n", registro[i].data);
            printf("%s\n", registro[i].departamento);
        }
        
    }
    

}
void questao3(struct cadastro *registro, int quantFunc){

    char DataBuffer[9];
    int indiceMaisVelho = 0;

    for(int i = 0; i<=(quantFunc-1);i++){
        if(strcmp(registro[indiceMaisVelho].utmData,registro[i].utmData)>0){
            indiceMaisVelho = i;}
    }

    printf("%s\n", registro[indiceMaisVelho].nome);
    printf("%.2f\n", registro[indiceMaisVelho].salario);
    printf("%s\n", registro[indiceMaisVelho].data);
    printf("%s\n", registro[indiceMaisVelho].departamento);

}
void questao4(struct cadastro *registro,int quantFunc,char *departamento){

    char DataBuffer[9];
    int indiceMaisVelho = -1;

    for(int i = 0; i<=(quantFunc-1);i++){
        if(strcmp(registro[i].departamento,departamento)==0){
            if(indiceMaisVelho==-1){
                indiceMaisVelho = i;
            }
            if(strcmp(registro[indiceMaisVelho].utmData,registro[i].utmData)>0){
                indiceMaisVelho = i;
                }
        }    
    }

    printf("%s\n", registro[indiceMaisVelho].nome);
    printf("%.2f\n", registro[indiceMaisVelho].salario);
    printf("%s\n", registro[indiceMaisVelho].data);
    printf("%s\n", registro[indiceMaisVelho].departamento);

}
void questao5(struct cadastro *registro, int quantFunc){
    double somaSalarial = 0, media;
    for (int i = 0; i < quantFunc; i++)
    {
        somaSalarial += registro[i].salario;
    }
    media = somaSalarial/quantFunc;

    printf("%.2lf\n", media);
}
void questao6(struct cadastro *registro, int quantFunc, char *departamento){
    double somaSalarial = 0;
    int contador = 0;
    for (int i = 0; i < quantFunc; i++)
    {
        if (strcmp(registro[i].departamento, departamento)==0)
        {
            somaSalarial += registro[i].salario;
            contador++;
        }
        
    }
    printf("%.2lf\n", somaSalarial/contador);
}

int main(int argc, char **argv){
    FILE *arquivo;
    int quantFunc, num;
    char questao[10];
    arquivo = fopen(argv[1],"r");
    if(arquivo == NULL){
        printf("Erro na abertura do arquivo");
        return EXIT_FAILURE;
    }
    fgets(questao,10,arquivo);
    quantFunc = atoi(questao); 
    
    struct cadastro cad[1000];
   
    for (int i = 0; i < quantFunc; i++)
    {
        fgets(cad[i].nome,50,arquivo);
        cad[i].nome[strlen(cad[i].nome)-1] = '\000';
        fscanf(arquivo, "%f\n", &cad[i].salario);
        fgets(cad[i].data,12,arquivo);
        cad[i].data[strlen(cad[i].data)-1] = '\000';
        utmDate(cad[i].data,cad[i].utmData);
        fgets(cad[i].departamento,20,arquivo);
        cad[i].departamento[strlen(cad[i].departamento)-1] = '\000';
    }
    
    fclose(arquivo);
    
    switch (*argv[2])
    {
        case '1':
            questao1(cad, quantFunc, argv[3]);
            break;
        case '2':
            questao2(cad, quantFunc, argv[3]);
            break;
        case '3':
            questao3(cad, quantFunc);
            break;
        case '4':
            questao4(cad, quantFunc, argv[3]);
            break;
        case '5':
            questao5(cad, quantFunc);
            break;
        case '6':
            questao6(cad, quantFunc, argv[3]);
            break;
    
        default:
            printf("Erro no segundo paramêtro");
            break;
    }
    
    return 0;
}