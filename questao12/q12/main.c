#include <stdio.h>

//Tipo de função sem parâmetros que retorna um inteiro
typedef int FuncaoSemParams();
typedef int FuncaoComParams(int x, int y);

int Exibe() {
    int i=100;
    printf("%d\n", i);
    printf("Exibindo o teste de ponteiro para Funcao \n");
}

int Params(int x, int y) {
    printf("%d\n", (x+y));
}

int main()
{
    int x=1,y=2;
    FuncaoSemParams *ponteiroS;
    FuncaoComParams *ponteiroC;


    ponteiroC = Params;
    ponteiroS = Exibe;
    (*ponteiroC) (x,y);
    (*ponteiroS) ();
    return 0;

}
