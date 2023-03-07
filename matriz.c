#include <stdlib.h> /* malloc, free, exit */
#include <stdio.h> /* printf */
#include "matriz.h"

void libera (Matriz* mat) {
    free(mat);
}

Matriz* cria (int m, int n) {
    Matriz *x = (Matriz*) malloc(1 * sizeof(Matriz));
    x -> col = m;
    x -> lin = n;
    x -> v = NULL;

    return  x;
}

float acessa (Matriz* mat, int i, int j) {
    int conta = i + j;
    printf("Valor: %.2f\n", *((mat->v) + conta));
}

int linhas (Matriz* mat) {
    printf("A matriz possui %d colunas!\n", mat -> lin);
}

void atribui (Matriz* mat, int i, int j, float x) {
    int conta = (mat -> lin) * (mat -> col);
    
    mat -> v = (float*) malloc(conta * sizeof(float));

    *((mat -> v) + i + j) = x;
}

int colunas (Matriz* mat) {
    printf("A matriz possui %d colunas!\n", mat -> col);
}

