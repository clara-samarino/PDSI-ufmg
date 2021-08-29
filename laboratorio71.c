#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int main(int argc, char **argv){
    FILE *p;
    char c;
    int countWords = 0;
    p = fopen(argv[1],"r");
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