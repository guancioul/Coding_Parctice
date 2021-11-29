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
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

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

bool application_4(int n){
    //return n>0 && ((n)&(n-1)?false:true);
    return (ceil(log10(n)/log10(2)) == floor(log10(n)/log10(2))) && (n!=0);
}

void application_5(int n){
    int count = 0;
    int* a = (int*)calloc(n, sizeof(int));
    srand(time(NULL));
    while(count<n){
        int ran = rand()%n+1;
        if(a[ran-1] == 1) continue;
        else{
            a[ran-1] = 1;
            count++;
            printf("%d ", ran);
        }
    }
    free(a);
}

int application_7(int a, int b, int n){
    if(n==0) return a;
    if(n==1) return b;
    return application_7(a, b, n-1) + application_7(a, b, n-2);
}

int application_8(int a, int b){
    if(b==0) return a;
    return application_8(b, a%b);
}

int main(){
    int a[10] = {9, 4, 1, 6, 7, 3, 8, 2, 5, 10};
    quicksort(a, 0, 9);
    //printarray(a);

    printf("%d is pow of 2: %d\n", 8, application_4(7));
    //application_5(500);

    printf("%d %d %d \n", 11, 12, application_7(11, 12, 3)); // 35
    int c = 9, d = 7;
    printf("%d %d gcd: %d\n", c, d, application_8(c, d));
}