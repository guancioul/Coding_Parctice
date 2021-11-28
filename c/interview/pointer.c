/*
    pointer
    1. pointer輸出
    2. pointer指標傳入function(function pointer)
    3. array指標操作(int a[5]={1,2,3,4,5}; 問印*(a++), *(++a) 的經典考題)
    4. 給一串記憶體位置與對參數，考pointer讀取參數填充給答案，並回答是Big-Endian/Little-Endian
*/
#include <stdio.h>
#include <stdlib.h>

typedef union {
  unsigned long l;
  unsigned char c[4];
} EndianTest;

void pointer_3(){
    int a[5] = {1,2,3,4,5};
    int* ptr = a;
    printf("%d\n",*(ptr++));
    ptr = a;
    printf("%d\n",*(++ptr));
}

void pointer_4(){
    EndianTest et;
    et.l = 0x12345678;
    if (et.c[0] == 0x78 && et.c[1] == 0x56 && et.c[2] == 0x34 && et.c[3] == 0x12) {
        printf("Little Endiann\n");
    } else if (et.c[0] == 0x12 && et.c[1] == 0x34 && et.c[2] == 0x56 && et.c[3] == 0x78) {
        printf("Big Endiann\n");
    } else {
        printf("Unknown Endiann\n");
    }
    printf("0x%lX\n", et.l);
    for (int i = 0; i < 4; i++) {
        printf("%p : 0x%02X\n", &et.c[i], et.c[i]);
    }
}

int main(){
    //pointer_3();
    pointer_4();
}