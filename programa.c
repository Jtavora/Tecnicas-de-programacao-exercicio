#include <stdio.h>  
#include <stdlib.h>
#include "matriz.h"

int main(int argc, char *argv[]) {
    float a,b,c,d;
    Matriz *M;

    M = cria(2, 2);

    atribui(M, 1, 1, 2.5);

    acessa(M, 1, 1);

    linhas(M);

    colunas(M);

    libera(M);
    
    return 0;
}
