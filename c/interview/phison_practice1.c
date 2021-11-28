/*
// Q1: 給一個int a[20]已排序的陣列，請寫一個function(a, size)能印出0~500的數字，且不包含a陣列內的元素，請用最少的時間和空間複雜度完成

// Q2: 給一個int a[20]已排序的陣列，請寫一個function(a, size, b)能依照參數b(b = 0~4)別印出該區間的數字，且不包含a陣列內的元素，例如：
// b = 0, 印出0~99
// b = 1, 印出100~199
// ...
// 請用最少的時間和空間複雜度完成。

// Q3: 情境題，給予一個 structure
// struct ListStruct{
//     unsigned int DataH;
//     unsigned int DataL;
//     unsigned int NextPtr;
// };
// struct ListStruct ListArray[1000];
// #define NULL 0xFFFF
// unsigned int ListHead = 0;
// 其中有兩個條件

// 條件一
// ListArray[Entry1].NextPtr = ListArray[Entry2]
// 條件二
// ListArray[Entry2].DataH << 16 + ListArray[Entry2].DataL > ListArray[Entry1].DataH << 16 + ListArray[Entry1].DataL
// 也就是說第一個 index 中的 NextPtr 會指到另一個 index 中的起始位址
// 再來是另一個 index 中的起始位址的資料內容大小一定大於原起始資料的大小

// 請寫一個function(unsigned int DATA_A, unsigned int DATA_B)，
// 能在ListArray中找到符合ListArray[Entry].DataH == Data_A 且 ListArray[Entry].DataL == Data_B
// 並印出其結果。如果沒有找到的話，印出”no found.”。
*/
#include <stdio.h>
#include <stdlib.h>

void phison_1(int* a){
    int* ptr = a;
    for(int i=0; i<=500; i++){
        if(*ptr==i)
            ptr++;
        else
            printf("%d ", i);
    }
}
void phison_2(int* a, int size, int b){
    int *ptr = a;
    while(*ptr<b*100){
        ptr++;
    }
    for(int i=b*100; i<(b+1)*100; i++){
        if(*ptr==i)
            ptr++;
        else
            printf("%d ", i);
    }
}
struct ListStruct{
    unsigned int DataH;
    unsigned int DataL;
    unsigned int NextPtr;
};
struct ListStruct ListArray[1000];
#define MYNULL 0xFFFF
unsigned int ListHead = 0;
void phison_3(unsigned int DATA_A, unsigned int DATA_B){
    unsigned int head = ListHead;
    unsigned int pre = MYNULL;
    unsigned int next = MYNULL;
    unsigned int find = 0;
    while(ListArray[head].NextPtr!=MYNULL){
        if(ListArray[head].DataH == DATA_A && ListArray[head].DataL == DATA_B){
            find = 1;
            if(pre == MYNULL){
                printf("FoundEntry = ListHead, PreEntry = NULL\n");
            }else{
                printf("find %d, %d, ptr = %d\n", DATA_A, DATA_B, head);
            }
            next = ListArray[head].NextPtr;
            if(ListArray[next].DataH<<16+ListArray[next].DataL > ListArray[head].DataH<<16+ListArray[head].DataL){
                break;
            }
        }
        pre = head;
        head = ListArray[head].NextPtr;
    }
    if(find == 0){
        printf("no found.");
    }
}

int main(){
    int* a;
    a = (int*)malloc(20*sizeof(int));
    for(int i=0; i<20; i++){
        *(a+i) = i*6;
    }
    //Q1
    //phison_1(a);
    //Q2
    //phison_2(a, 20, 0);
    //Q3
    for(int i=0; i<1000; i++){
        ListArray[i].DataH = i*2;
        ListArray[i].DataL = i*2-2;
        ListArray[i].NextPtr = i+1;
    }
    ListArray[999].NextPtr = MYNULL;
    phison_3(10, 8);
    return 0;
}