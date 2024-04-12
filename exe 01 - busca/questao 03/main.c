/*
QUESTÃO 3)

Implemente em linguagem C a busca binaria utilizando recursividade.
*/

#include <stdio.h>

int buscaBinaria(int *vetor, int numeroEscolhido, int inicio, int fim) {
    int meio = (inicio + fim) / 2;

    if(vetor[meio] == numeroEscolhido) {
        return meio+1;
    } else if(vetor[meio] < numeroEscolhido) {
        return buscaBinaria(vetor, numeroEscolhido, meio+1, fim);
    } else {
        return buscaBinaria(vetor, numeroEscolhido, inicio, meio-1);
    }
}

void imprimeVetor(int *vetor) {
    for(int i=0; i<10; i++) {
        printf(" %d ", vetor[i]);
    }
}

int main () {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, numeroEscolhido = 10, posicao;

    imprimeVetor(vetor);
    
    posicao = buscaBinaria(vetor, numeroEscolhido, 0, 10);
    printf("\nposicao: %d\n", posicao);

    return 0;
}