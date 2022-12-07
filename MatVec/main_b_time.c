#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include "main.h"

int main(void){
    int parameter = 1000;
    
    int* M = (int*) malloc(parameter * parameter * sizeof(int));
    int* v = (int*) malloc(parameter * sizeof(int));
    int* vo = (int*) malloc(parameter * sizeof(int));

    printf("parameter: %d\n", parameter);
    printf("time: %fs\n", getDuration(matVecMult, M, v, vo, parameter));
    
    free(M);
    free(v);
    free(vo);

    return 0;
}