#include <stdio.h>
//Definição de um tipo de função void
typedef void funcaoFloat(float *x, int y);


// Função que ordena o ponteiro
void ordenaPonteiro (float *vetorFloats, int tamanhoVetor){
    int i, j, armazenaBackup;
    for(i=0; i<tamanhoVetor-1; i++) {
        for(j=tamanhoVetor-1;j>i;--j) {
                if(vetorFloats[j-1]>vetorFloats[j]){
                    armazenaBackup = vetorFloats[j-1];
                    vetorFloats[j-1] = vetorFloats[j];
                    vetorFloats[j] = armazenaBackup;
            }
        }
    }
}


int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    // Declaração do ponteiroi para função void
     funcaoFloat *ponteiroFuncaoFloat;
    float *ponteiroFloat;
    int tamanho;
    // Atribuição da função no ponteiro
     ponteiroFuncaoFloat = ordenaPonteiro;

    printf("Digite a quantidade de numeros que serao necessarios\n");
    scanf("%i", &tamanho);
    ponteiroFloat = malloc(tamanho*sizeof(float));

    printf("Digite os numeros e digite f para finalizar\n");

    for(int i=0;i<tamanho;i++) {
        scanf("%f", (ponteiroFloat + i) );
    }

    // Chama da função pelo ponteiro
     (*ponteiroFuncaoFloat) (ponteiroFloat, tamanho);



    for(int i=0;i<tamanho;i++) {
        printf("%f\n", *(ponteiroFloat + i));
    }

    free(ponteiroFloat);


    return 0;
}
