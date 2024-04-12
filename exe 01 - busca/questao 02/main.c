/*
QUESTÃO 2)

Implemente em linguagem C a variacao da busca sequencial 
utilizando a tecnica de entradas
mais solicitadas pelo metodo transposicao.
*/

#include <stdio.h>

int buscaTransposicao(int *vetor, int numeroEscolhido) {
    int i, j, posicao;
    for(i=0; i<10; i++) {
        if(vetor[i] == numeroEscolhido) {
            posicao = i+1;
            vetor[i] = vetor[i-1];
            vetor[i-1] = numeroEscolhido;
        }
    }
    return posicao;
}

void imprimeVetor(int *vetor) {
    for(int i=0; i<10; i++) {
        printf(" %d ", vetor[i]);
    }
    printf("\n");
}

int main () {
    int vetor[10] = {5, 7, 3, 9, 11, 1, 4, 5, 3, 6}, numeroEscolhido = 4, posicao;

    imprimeVetor(vetor);
    
    posicao = buscaTransposicao(vetor, numeroEscolhido);

    imprimeVetor(vetor);

    return 0;
}