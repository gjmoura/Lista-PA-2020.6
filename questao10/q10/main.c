#include <stdio.h>

int main()
{
    int i;
    int caracter=1, inteiro=2, decimal=4, duplo=8;

    int x[4];
    x[0] = 4092;
    for( i=0;i<4;i++) {
        printf(" %d", x[i]);
        x[i+1] = x[i] + caracter;
    }

     printf(" \n");

    for( i=0;i<4;i++) {
        printf(" %d", x[i]);
        x[i+1] = x[i] + inteiro;
    }

    printf(" \n");

    for( i=0;i<4;i++) {
        printf(" %d", x[i]);
        x[i+1] = x[i] + decimal;
    }

    printf(" \n");

    for( i=0;i<4;i++) {
        printf(" %d", x[i]);
        x[i+1] = x[i] + duplo;
    }

    printf(" \n");

    return 0;
}
