#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void initMatRandInt(int* M, int lower, int upper, int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
        {
            M[i*N+j] = (rand() % (upper-lower+1)) + lower;
        } 
    }
}

void initVecRandInt(int* v, int lower, int upper, int N){
    for (int i = 0; i < N; i++){
        v[i] = (rand() % (upper-lower+1)) + lower;
    }
}

double getDuration (void matVecMult(int*, int*, int*, int), int* M, int*v, int*vo, int N){
    int start = clock();
    matVecMult(M, v, vo, N);
    int end = clock();
    return (double)(end-start)/CLOCKS_PER_SEC;
}