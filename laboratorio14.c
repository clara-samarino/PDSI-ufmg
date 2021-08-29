#include <stdio.h>
#include <stdlib.h>
int main (){
    int valor;
    scanf("%d", &valor);
    int notas[7] = {100, 50, 20, 10, 5, 2 ,1};
    int valorResidual = valor;
    int quantidadeNotas = 0;
    int notaVigente;
    for(int i=0; i<7; i++)
    {
        notaVigente = notas[i];
        quantidadeNotas = (valorResidual - valorResidual%notaVigente)/notaVigente;
        valorResidual = valorResidual - quantidadeNotas*notaVigente;
        printf("%d: %d\n", notaVigente, quantidadeNotas);


    }
    return 0;
}