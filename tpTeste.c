#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct cadastro{
    char nome[20];
    char rua[20];
    int idade;
};
int main(int argc, char **argv){
    FILE *arquivo;
    arquivo = fopen(argv[1],"w");
    if(arquivo == NULL){
        printf("Erro na abertura do arquivo");
        return EXIT_FAILURE;
    }
    struct cadastro c, cad[3] = {"Ricardo", "um", 31, "Carlos", "dois", 28, "Ana", "três", 45};
    fwrite(cad, sizeof(struct cadastro),4,arquivo);
    fclose(arquivo);
    arquivo = fopen(argv[1], "r");
    fseek(arquivo, 2*sizeof(struct cadastro), SEEK_SET);
    fread(&c,sizeof(struct cadastro),1,arquivo);
    printf("%s\n%s\n%d\n", c.nome, c.rua, c.idade);
    fclose(arquivo);
    return 0;
}