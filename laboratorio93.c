#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    double comprimentoS;
    double larguraS;
    double comprimentoP;
    double larguraP;
    char tipo[50];
}Iris;
void classificar(Iris nao_identificada, Iris registros_identificados[], int n){
    double somatorio1, somatorioMenor, distanciaEuclidiana1, distanciaMenor;
    int indiceMenor = 0, indice = 0;
    somatorioMenor = pow(nao_identificada.comprimentoS - registros_identificados[0].comprimentoS,2) + pow(nao_identificada.larguraS - registros_identificados[0].larguraS,2) + pow(nao_identificada.comprimentoP - registros_identificados[0].comprimentoP,2) + pow(nao_identificada.larguraP - registros_identificados[0].larguraP,2);
    distanciaMenor = sqrt(somatorioMenor);
    for (indice = 1; indice < n; indice++)
    {
        somatorio1 = pow(nao_identificada.comprimentoS - registros_identificados[indice].comprimentoS,2) + pow(nao_identificada.larguraS - registros_identificados[indice].larguraS,2) + pow(nao_identificada.comprimentoP - registros_identificados[indice].comprimentoP,2) + pow(nao_identificada.larguraP - registros_identificados[indice].larguraP,2);
        distanciaEuclidiana1 = sqrt(somatorio1);
        if (distanciaEuclidiana1<distanciaMenor)
        {
            distanciaMenor = distanciaEuclidiana1;
            indiceMenor = indice;
        }
        
    }
    printf("%s\n", registros_identificados[indiceMenor].tipo);
}

int main(){
    int tamanho;
    char quant[5], linha[100], tipo[50];
    double compS, compP, largS, largP; 
    fgets(quant, 5, stdin);
    sscanf(quant,"%d", &tamanho);
    Iris registros[tamanho];
    Iris nRegistrada;
    for (int i = 0; i < tamanho; i++)
    {
        fgets(linha, 100, stdin);
        sscanf(linha,"%lf %lf %lf %lf %s", &registros[i].comprimentoS,&registros[i].larguraS, &registros[i].comprimentoP, &registros[i].larguraP, registros[i].tipo);
        
    }
    fgets(linha, 100, stdin);
    sscanf(linha,"%lf %lf %lf %lf",&nRegistrada.comprimentoS, &nRegistrada.larguraS, &nRegistrada.comprimentoP, &nRegistrada.larguraP);
    
    classificar(nRegistrada, registros, tamanho);
    return 0;
}