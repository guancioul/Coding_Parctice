#include <stdio.h>
#include <stdlib.h>
union Phison_1
{
    int nums;
    char bit[4];
}test;

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int swap1(int num){
    test.nums = num;
    printf("%x ", test.nums);
    //printf("%d %d %d %d\n", test.bit[0], test.bit[1], test.bit[2], test.bit[3]);
    swap(&test.bit[0], &test.bit[3]);
    swap(&test.bit[1], &test.bit[2]);
    printf("%x ", test.nums);
    //printf("%d %d %d %d\n", test.bit[0], test.bit[1], test.bit[2], test.bit[3]);
    return 0;
}

int main(){
    swap1(10);
    return 0;
}
