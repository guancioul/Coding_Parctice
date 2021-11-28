/*
    應用題
    1. 排序法 時間複雜度
    2. 請我解釋一下 quick sort。我就盡量講，worst : O(n^2), average : O(nlogn)，然後敘述一下遞迴的時做法
    3. 寫一程式輸入n，計算距離現在n天後是幾年幾月幾號
    4. 寫function return這個整數是不是2的次方 (除了常見解法，還可以了解一下log解法)
    5. 0~500個數字每次隨機，取一個數字出來，但下次在抽出時不可以出現已經抽過的數字，問你如何實現
    6. 印出
       ```
       *
       **
       ***
       ****
       *****
       ```
    7. 11,12,23,35,58,....N 用一個函數 輸入值是位置的值n，要找出相對應的值，就是費式數列
    8. 最大公因數(遞迴寫法)
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *a, int start, int end){
    int pivot = a[end];
    int i = start-1, j = start;
    while(j!=end){
        if(a[j] < pivot){
            i++;
            swap(&a[i], &a[j]);
        }
        j++;
    }
    i++;
    swap(&a[i], &a[end]);
    return i;
}

void quicksort(int *a, int start, int end){
    if(end > start){
        int pivot = partition(a, start, end);
        quicksort(a, start, pivot-1);
        quicksort(a, pivot+1, end);
    }
}

void printarray(int *a){
    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int a[10] = {9, 4, 1, 6, 7, 3, 8, 2, 5, 10};
    quicksort(a, 0, 9);
    printarray(a);
    
}