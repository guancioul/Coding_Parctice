#include <stdio.h>
#include <stdlib.h>
// 編譯器讓資料結構強制重新排列
#pragma pack(1)

struct ABC {
    int index;
    char name[6];
    int score;
}__attribute__((packed));;

struct DEF {
    int att;
    char name[3];
    char index;
} __attribute__((packed));;

int main(){
    printf("sizeof(ABC) = %d\n", sizeof(struct ABC));
    printf("sizeof(DEF) = %d\n", sizeof(struct DEF));
    return 0;
}