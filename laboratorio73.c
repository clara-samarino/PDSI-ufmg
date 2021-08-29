#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int main(){
    char fname[100];
    fgets(fname, 100, stdin);
    fname[strlen(fname)-1] = '\0';
    FILE *p = fopen(fname,"rb");
    if (p == NULL)
    {
        perror("Erro: ");//printf("Erro");
        return EXIT_FAILURE;
    }
    unsigned long long int m1[5][5], m2[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fscanf(p,"%llu", &m1[i][j]);
        }  
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fscanf(p,"%llu", &m2[i][j]);
        }  
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%llu ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    
    fclose(p);
    return EXIT_SUCCESS;
}