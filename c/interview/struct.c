/*
    Struct
    1. struct大小
    2. memory alignment(記憶體對齊的問題)
    https://kezeodsnx.pixnet.net/blog/post/27585076
*/
#include <stdio.h>
#include <stdlib.h>

struct A {
    int index;
    char name[6];
    int score;
};

struct B {
    int att;
    char name[3];
    char index;
};

// 編譯器讓資料結構強制重新排列
#pragma pack(1)

struct C {
    int index;
    char name[6];
    int score;
}__attribute__((packed));;

struct D {
    int att;
    char name[3];
} __attribute__((packed));;

int main(){
    printf("sizeof(A) = %d\n", sizeof(struct A));
    printf("sizeof(B) = %d\n", sizeof(struct B));
    printf("sizeof(C) = %d\n", sizeof(struct C));
    printf("sizeof(D) = %d\n", sizeof(struct D));
    return 0;
}