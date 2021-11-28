/*
    Sorted Array
    1. 兩個sorted array排序
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SortedArray_1(int *A, int *B, int* sorted, int A_size, int B_size){
    int n = A_size+B_size;
    for(int i=0; i<n; i++){
        if(A_size == 0){
            *(sorted+i) = *B;
            B++;
        }else if(B_size == 0){
            *(sorted+i) = *A;
            A++;
        }else if(*A > *B){
            *(sorted+i) = *B;
            B++;
            B_size--;
        }else{
            *(sorted+i) = *A;
            A++;
            A_size--;
        }
    }
}

int main(){
    int A[] = {1, 3, 5, 7, 10, 11}, B[] = {};
    int* sorted;
    int A_size = sizeof(A)/sizeof(int), B_size = sizeof(B)/sizeof(int);
    sorted = (int*)malloc((A_size+B_size)*sizeof(int));
    // Q1
    SortedArray_1(A, B, sorted, A_size, B_size);
    for(int i=0; i<A_size+B_size; i++){
        printf("%d ", sorted[i]);
    }
    free(sorted);
    return 0;
}