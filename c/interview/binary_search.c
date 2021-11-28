/*
    binary search
    1. 實作 Binary search，找到回true，反之回false
    2. 給一串矩陣，先Sort從小到大，並Search某個參數在第幾個位置。(binary search)
    3. sorted int array，回傳一個value的區間
    4. 給定一個排序好的矩陣，從[1,1,1,...,0,0]用最少的資源找出最後一個1
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool binary_search_1(int* a, int find, int size){
    int l = 0, r = size-1;
    while(r>=l){
    int mid = (r+l)/2;
        if(*(a+mid)==find) {
            return true;
        }
        else if(*(a+mid)>find){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return false;
}

int binary_search_2(int* a, int find, int size){
    int l = 0, r = size-1;
    while(r>=l){
    int mid = (r+l)/2;
        if(*(a+mid)==find) {
            return mid;
        }
        else if(*(a+mid)>find){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return -1;
}

int lower_bound(int* a, int find, int size){
    int l = 0, r = size;
    while(r>l){
        int mid = l+(r-l)/2;
        if(*(a+mid)>=find){
            r = mid;
        }else{
            l = mid+1;
        }
    }
    if(l<size && *(a+l)<find){
        l++;
    }
    return l;
}

int upper_bound(int* a, int find, int size){
    int l = 0, r = size;
    while(r>l){
        int mid = l+(r-l)/2;
        if(*(a+mid)<=find){
            l = mid+1;
        }else{
            r = mid;
        }
    }
    if(l<size && *(a+l)<find){
        l++;
    }
    return l;
}

int binary_search_4(int* b, int size){
    int l = 0, r = size; 
    while(r>l){
        int mid = l+(r-l)/2;
        if(*(b+mid)==1){
            l = mid+1;
        }else{
            r = mid;
        }
    }
    return l;
}

int main(){
    int* a; int size = 10;
    a = (int*)malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        *(a+i) = i;
    }
    int find = 5;
    printf("isfind = %d\n", binary_search_1(a, find, size));
    printf("isfind index = %d\n", binary_search_2(a, find, size));
    printf("find = %d, lower_bound = %d, upper_bound = %d\n", find, lower_bound(a, find, size), upper_bound(a, find, size));
    int* b;
    b = (int*)malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        if(i<5)
            *(b+i) = 1; 
        else
            *(b+i) = 0;
    }
    printf("find last one = %d\n", binary_search_4(b, size)-1);
    return 0;
}