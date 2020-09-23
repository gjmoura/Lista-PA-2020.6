#include <stdio.h>

typedef void funcaoFloat(float *x, int y);

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

int main()
{
    funcaoFloat *ponteiroFuncaoFloat;
    float *ponteiroFloat;
    int tamanho;

    ponteiroFuncaoFloat = ordenaPonteiro;

    printf("Digite a quantidade de numeros que serao necessarios\n");
    scanf("%i", &tamanho);
    ponteiroFloat = malloc(tamanho*sizeof(float));

    printf("Digite os numeros e digite f para finalizar\n");

    for(int i=0;i<tamanho;i++) {
        scanf("%f", (ponteiroFloat + i) );
    }


    (*ponteiroFuncaoFloat) (ponteiroFloat, tamanho);


    for(int i=0;i<tamanho;i++) {
        printf("%f\n", *(ponteiroFloat + i));
    }

    free(ponteiroFloat);


    return 0;
}
