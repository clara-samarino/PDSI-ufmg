#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    enum meses {janeiro = 1, fevereiro = 2, marco = 3, abril = 4, maio = 5, junho = 6, julho = 7, agosto = 8, setembro = 9, outubro = 10, novembro = 11, dezembro = 12}mes;
    int dia;
    int ano;
}Data;
typedef struct{
    char nome[100];
    char local[100];
    Data dataEvento;

}Evento;
void cadastrar_eventos(Evento agenda[], int n){
    int day, month, year;
    char linha[200], name[100], lugar[100];
    for (int i = 0; i < n; i++)
    {
        fgets(linha, 200, stdin);
        sscanf(linha,"%s %s %d %d %d", name, lugar, &day, &month, &year);
        strcpy(agenda[i].nome, name);
        strcpy(agenda[i].local,lugar);
        agenda[i].dataEvento.dia = day;
        agenda[i].dataEvento.mes = month;
        agenda[i].dataEvento.ano = year;
    }
}
void imprimir_eventos(Evento agenda[], Data d, int n){

    int encontrouEvento = 0;
    for (int i = 0; i < n; i++)
    {
    
        if (agenda[i].dataEvento.ano == d.ano)
        {
            if (agenda[i].dataEvento.mes == d.mes)
            {
                if (agenda[i].dataEvento.dia == d.dia)
                {
                    encontrouEvento = 1;
                    printf("%s %s\n", agenda[i].nome, agenda[i].local);
                }
                
            }
            
        }
        
    }
    if (encontrouEvento == 0)
    {
        printf("Nenhum Evento Encontrado!");
    }
    
}
int main(){
    int quantidade, day, month, year;
    char quant[5], linha[12];
    Data dataBusca;
    fgets(quant, 5, stdin);
    sscanf(quant,"%d", &quantidade);
    Evento registros[quantidade];
    cadastrar_eventos(registros, quantidade);
    fgets(linha, 12, stdin);
    sscanf(linha,"%d %d %d", &day, &month, &year);
    dataBusca.dia = day;
    dataBusca.mes = month;
    dataBusca.ano = year;
    imprimir_eventos(registros, dataBusca, quantidade);
    return 0;
}