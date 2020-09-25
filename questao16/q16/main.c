#include <stdio.h>
#include <stdlib.h>
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>

#define TAM 100000 //constante para tamanho do vetor
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


float floatAleatorio(int low, int high)
{
    float k;
    srand( (unsigned)time(NULL) );
    k = (rand() % high) + low;
    return k;
}

int main()
{
    //Declaração do ponteiroi para função void
    funcaoFloat *ponteiroFuncaoFloat;
    float *ponteiroFloat;
    clock_t t;
    int  a,i;





    // Atribuição da função no ponteiro
    ponteiroFuncaoFloat = ordenaPonteiro;



    ponteiroFloat = malloc(TAM*sizeof(float));

    //geração aleatório dos valores do vetor
     for(a = 0; a < TAM; a++) {
      *(ponteiroFloat + a)  = rand() % 100 + 1;
    }



    // Chama da função pelo ponteiro
    t = clock(); //armazena tempo
    //(*ponteiroFuncaoFloat) (ponteiroFloat, TAM);
    qsort(ponteiroFloat, TAM, sizeof(float), comparador);
    t = clock() - t; //tempo final - tempo inicial


    for( i=0;i<a;i++) {
        printf("%f\n", *(ponteiroFloat + i));
    }

    printf("%d\n", i);
    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);

    free(ponteiroFloat);






    return 0;
}
