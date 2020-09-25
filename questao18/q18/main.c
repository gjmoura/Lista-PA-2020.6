#include <stdio.h>
#include <stdlib.h>

void multiplicaMatrizes(int **A, int **B, int **C, int linhasDeA, int colunasDeA, int colunasDeB) {


    for(int linha = 0; linha<linhasDeA; linha++) {
        for(int coluna = 0; coluna<colunasDeB; coluna++) {

            for(int colunas = 0; colunas<colunasDeA; colunas++) {

                C[linha][coluna] += A[linha][colunas] * B[colunas][coluna];

            }


        }
    }
}

void preencheMatriz(int ** matriz, int linhas, int colunas) {
    printf("Preencha com os elementos da matriz\n");
    for(int linha=0;linha<linhas;linha++) {
        for(int coluna=0;coluna<colunas;coluna++) {
            printf("Posicao[%i][%i] = ",linha,coluna);
             scanf("%i",  &matriz[linha][coluna]);
             printf("\n");

        }
    }

}

void exibeMatriz(int **matriz, int linhas, int colunas) {
    for(int linha=0;linha<linhas;linha++) {
        for(int coluna=0;coluna<colunas;coluna++) {
             printf("Posicao[%i][%i] = ",linha,coluna);
             printf("%d",  matriz[linha][coluna]);
             printf("\n");

        }
    }
}

void zeraMatriz(int **matriz, int linhas, int colunas) {
    for(int linha=0;linha<linhas;linha++) {
        for(int coluna=0;coluna<colunas;coluna++) {
             matriz[linha][coluna] = 0;


        }
    }
}


int main()
{
    int ** A, **B, **C;
    int linhasDeA,colunasDeA,linhasDeB,colunasDeB;

    printf("Digite a quantidade de linhas da matriz A\n");
    scanf("%i", &linhasDeA);
    printf("Digite a quantidade de colunas da matriz A\n");
    scanf("%i", &colunasDeA);

    A = malloc(linhasDeA*sizeof(int*));
    A[0] = malloc(linhasDeA*colunasDeA*sizeof(int));

    for(int i=1; i<linhasDeA;i++) {
        A[i] = A[i-1]+colunasDeA;
    }


    printf("Digite a quantidade de linhas da matriz B\n");
    scanf("%i", &linhasDeB);
    printf("Digite a quantidade de colunas da matriz B\n");
    scanf("%i", &colunasDeB);

    B = malloc(linhasDeB*sizeof(int*));
    B[0] = malloc(linhasDeB*colunasDeB*sizeof(int));

    for(int j=1; j<linhasDeB;j++) {
        B[j] = B[j-1]+colunasDeB;
    }

    C = malloc(linhasDeA*sizeof(int*));
    C[0] = malloc(linhasDeA*colunasDeB*sizeof(int));

    for(int k=1; k<linhasDeB;k++) {
        C[k] = C[k-1]+colunasDeB;
    }


    preencheMatriz(A,linhasDeA,colunasDeA);
    preencheMatriz(B,linhasDeB,colunasDeB);

    zeraMatriz(C,linhasDeA,colunasDeB);



    multiplicaMatrizes(A,B,C,linhasDeA,colunasDeA,colunasDeB);

    printf("-----------------------Saida dos dados---------------------------\n");
    printf("------------------Matriz A---------------\n");
    exibeMatriz(A,linhasDeA,colunasDeA);
    printf("------------------Matriz B---------------\n");
    exibeMatriz(B,linhasDeB,colunasDeB);
    printf("------------------Matriz C---------------\n");
    exibeMatriz(C,linhasDeA,colunasDeB);

    free(C[0]);
    free(C);

    free(B[0]);
    free(B);

    free(A[0]);
    free(A);




}
