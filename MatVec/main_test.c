#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "mylib/mylib.h"



int main(void){
    int N = 3;

    int* M = (int*) malloc(N * N * sizeof(int));
    int* v = (int*) malloc(N * sizeof(int));
    int* vo = (int*) malloc(N * sizeof(int));

    initMatRandInt(M, 0, 9, N);
    initVecRandInt(M, 0, 9, N);

    matVecMult(M, v, vo, N);

    printf("Matrix =");
    printMat(M, N);
    printf("Vector =");
    printVec(v, N);
    printf("x =");
    printVec(vo, N);

    free(M);
    free(v);
    free(vo);
    return 0;
}