#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int main(){
    char fname[200];
    fgets(fname, 200, stdin);
    fname[strlen(fname)-1] = '\0';
    FILE *p = fopen(fname,"rb");;
    char c;
    int countWords = 0;
    p = fopen(fname,"r");
    if (p == NULL)
    {
        perror("Erro");//printf("Erro");
        exit(1); //return EXIT_FAILURE 
    }
    while((c = fgetc(p)) != EOF)
    {
        if (c == 'a')
        {
            countWords++;
        }

    }
    printf("%d",countWords);
    fclose(p);
    return EXIT_SUCCESS;
}