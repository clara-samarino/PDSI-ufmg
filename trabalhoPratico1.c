#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int quantJogos;
    int tamanhoTab;
    int quantJogadas;
    char inputKey;
    int verificadorBomba;
    int inputLinha, inputColuna;
    int contB;
    int cont1;
    int bomba[10];
    scanf(" %d", &quantJogos);
    for (int i = 0; i < quantJogos; i++)
    {
        contB = 0;
        cont1 = 0;
        bomba[i] = 0;
        scanf(" %d", &tamanhoTab);
        char matriz[tamanhoTab][tamanhoTab];
        int matrizVerif[tamanhoTab][tamanhoTab];
        for (int k = 0; k < tamanhoTab; k++)
        {
            for (int l = 0; l < tamanhoTab; l++)
            {
                scanf(" %c", &inputKey);
                matriz[k][l] = inputKey;
            
                if(inputKey == 'b'){
                    contB +=1;
                    matrizVerif[k][l] = 2;
                }
                else
                {
                    matrizVerif[k][l] = 0;
                }
            
            
            }
            
        }
        scanf(" %d", &quantJogadas);
        
        for (int j = 0; j < quantJogadas; j++)
        {
            
            scanf("%d %d", &inputLinha, &inputColuna);

        
            if (matriz[inputLinha][inputColuna] == 'b')
            {
                bomba[i] = 1;
            }

            else 
            {
                verificadorBomba = 0;
                if (matrizVerif[inputLinha][inputColuna] != 1)
                {
                    matrizVerif[inputLinha][inputColuna] = 1;
                    cont1+=1;
                }
            
            
                if (inputLinha<tamanhoTab-1)
                {
                    if (matriz[inputLinha+1][inputColuna]=='b')
                    {
                        verificadorBomba = 1;
                    }
                    
                }
                if (inputLinha>0)
                {
                    if (matriz[inputLinha-1][inputColuna]=='b')
                    {
                        verificadorBomba = 1;
                    }
        
                }
            
                if (inputColuna<tamanhoTab-1)
                {
                    if (matriz[inputLinha][inputColuna+1]=='b')
                    {
                        verificadorBomba = 1;
                    }
                
                }
                if (inputColuna>0)
                {
                    if (matriz[inputLinha][inputColuna-1]=='b')
                    {
                        verificadorBomba = 1;
                    }
                
                }
                if (inputLinha<tamanhoTab-1 && inputColuna<tamanhoTab-1)
                {
                    if (matriz[inputLinha+1][inputColuna+1]=='b')
                    {
                        verificadorBomba = 1;
                    }
                
                
                }
                if (inputColuna>0 && inputLinha<tamanhoTab-1)
                {
                    if (matriz[inputLinha+1][inputColuna-1]=='b')
                    {
                        verificadorBomba = 1;
                    }   
                
                }
                if (inputLinha>0 && inputColuna<tamanhoTab-1)
                {
                    if (matriz[inputLinha-1][inputColuna+1]=='b')
                    {
                        verificadorBomba = 1;
                    } 
                
                
                }
                if (inputLinha>0 && inputColuna>0)
                {
                    if (matriz[inputLinha-1][inputColuna-1]=='b')
                    {
                        verificadorBomba = 1;
                    } 
                
                }
                if (verificadorBomba == 0)
                {
                    if (inputLinha<tamanhoTab-1)
                    {
                        if (matrizVerif[inputLinha+1][inputColuna] != 1)
                        {
                            matrizVerif[inputLinha+1][inputColuna] = 1;
                            cont1+=1;
                        }
                
                    }
                    if (inputLinha>0)
                    {
                        if (matrizVerif[inputLinha-1][inputColuna] != 1)
                        {
                            matrizVerif[inputLinha-1][inputColuna] = 1;
                            cont1+=1;
                        }
        
                    }
            
                    if (inputColuna<tamanhoTab-1)
                    {
                        if (matrizVerif[inputLinha][inputColuna+1] != 1)
                        {
                            matrizVerif[inputLinha][inputColuna+1] = 1;
                            cont1+=1;
                        }
                
                    }
                    if (inputColuna>0)
                    {
                        if (matrizVerif[inputLinha][inputColuna-1] != 1)
                        {
                            matrizVerif[inputLinha][inputColuna-1] = 1;
                            cont1+=1;
                        }
                
                    }
                    if (inputLinha<tamanhoTab-1 && inputColuna<tamanhoTab-1)
                    {
                        if (matrizVerif[inputLinha+1][inputColuna+1] != 1)
                        {
                            matrizVerif[inputLinha+1][inputColuna+1] = 1;
                            cont1+=1;
                        }
                
                
                    }
                    if (inputColuna>0 && inputLinha<tamanhoTab-1)
                    {
                        if (matrizVerif[inputLinha+1][inputColuna-1] != 1)
                        {
                            matrizVerif[inputLinha+1][inputColuna-1] = 1;
                            cont1+=1;
                        }    
                
                    }
                    if (inputLinha>0 && inputColuna<tamanhoTab-1)
                    {
                        if (matrizVerif[inputLinha-1][inputColuna+1] != 1)
                        {
                            matrizVerif[inputLinha-1][inputColuna+1] = 1;
                            cont1+=1;
                        }
                
                
                    }
                    if (inputLinha>0 && inputColuna>0)
                    {
                        if (matrizVerif[inputLinha-1][inputColuna-1] != 1)
                        {
                            matrizVerif[inputLinha-1][inputColuna-1] = 1;
                            cont1+=1;
                        }
                
                    } 
                }
                    
            }        
            
        }
        if (bomba[i] == 1)
        {
            printf("PERDEU\n");
        }
        else if ((tamanhoTab*tamanhoTab - contB == cont1) && (bomba[i] == 0))
        {
            printf("GANHOU\n");
        }
        else if ((tamanhoTab*tamanhoTab - contB != cont1) && (bomba[i] == 0))
        {
            printf("FALTOU TERMINAR\n");
        }
    }
    
    return 0;
}