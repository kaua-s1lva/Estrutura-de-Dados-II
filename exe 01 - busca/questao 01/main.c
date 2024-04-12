/*
QUESTÃO 1)

Implemente em linguagem C a variacao da busca sequencial 
utilizando a tecnica de entradas
mais solicitadas pelo metodo mover-para-frente.
*/

#include <stdio.h>

int buscaMoverFrente(int *vetor, int numeroEscolhido) {
    int i, j, posicao;
    for(i=0; i<10; i++) {
        if(vetor[i] == numeroEscolhido) {
            posicao = i+1;
            for(j=i; j>0; j--) {
                vetor[j] = vetor[j-1];
            }
            vetor[0] = numeroEscolhido;
        }
    }
    return posicao;
}

void imprimeVetor(int *vetor) {
    for(int i=0; i<10; i++) {
        printf(" %d ", vetor[i]);
    }
}

int main () {
    int vetor[10] = {5, 7, 3, 9, 11, 1, 4, 5, 3, 6}, numeroEscolhido = 4, posicao;

    imprimeVetor(vetor);
    
    posicao = buscaMoverFrente(vetor, numeroEscolhido);

    imprimeVetor(vetor);

    return 0;
}