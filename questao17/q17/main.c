#include <stdio.h>

void somaVetores(int primeiroVetor[], int segundoVetor[], int vetorProduto[], int tamanhoDosVetores) {

    for(int posicao=0; posicao<tamanhoDosVetores; posicao++) {
        vetorProduto[posicao] = primeiroVetor[posicao] + segundoVetor[posicao];
    }

}

int main()
{
    int tamanhoDoVetor, posicao;
    printf("Qual o tamanho dos vetores?");
    scanf("%i", &tamanhoDoVetor);
    int primeiroVetor[tamanhoDoVetor], segundoVetor[tamanhoDoVetor],  vetorProduto[tamanhoDoVetor];

    printf("Digite os valores das posições do primeiro vetor\n");

    for(posicao=0; posicao<tamanhoDoVetor; posicao++) {
        scanf("%i", &primeiroVetor[posicao]);
    }

    printf("\n");

    printf("Agora digite os valores das posições do segundo vetor\n");

    for(posicao=0; posicao<tamanhoDoVetor; posicao++) {
        scanf("%i", &segundoVetor[posicao]);
    }



    somaVetores(primeiroVetor, segundoVetor, vetorProduto, tamanhoDoVetor);

    for(posicao=0; posicao<tamanhoDoVetor; posicao++) {
        printf("Posicao [%i] = %d\n", posicao, vetorProduto[posicao]);
    }

}
