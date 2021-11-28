/*
    bitwise
    1. bitwise基本操作(OK)
    2. 回傳int中有幾個bit為1(OK)
    3. bitwise操作(set bit、clear bit 的經典考題)
    4. 寫function 把某個數的第x個bit改成1或0 (改成1直接用or、改成0用mask 之後and)
    5. 8-bit size的值求最高位元是在第幾個bit
    6. int a = 0xfafc 求第九個bit值是多少
    7. invise一個bit
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void bitwise_2(int a, int* count){
    while(a>0){
        if(a & 1) (*count)++;
        a>>=1;
    }
}

void bitwise_3(int *b, int n, char operator){
    if(operator == 's'){
        *b |= (1<<n-1);
    }else if(operator == 'c'){
        *b &= ~(1<<n-1);
    }else{
        printf("operator error");
    }
}

int bitwise_5(uint8_t c){
    for(int i=7; i>=0; i--){
        if((1<<i)&c){
            return i;
        }
    }
}

int bitwise_6(int d){
    return (d>>8)&1;
}

int bitwise_7(int e, int n){
    return (1<<n-1)^e;
}

int main(){
    int a = 5, count = 0;
    bitwise_2(a, &count);
    printf("%d\n", count);

    int b = 5, n = 10;
    bitwise_3(&b, 2, 's');
    printf("%d\n", b); // 7
    bitwise_3(&b, 2, 'c');
    printf("%d\n", b); // 5

    uint8_t c = 10; 
    printf("sizeof(uint8_t) = %d\n", sizeof(c));
    printf("Highest bit  = %d\n", bitwise_5(c)); // 3

    int d = 0xfafc;
    printf("nine bit = %d\n", bitwise_6(d)); // 0

    int e = 10,  bit_index = 3;
    printf("invert bit = %d, ans = %d\n", bit_index, bitwise_7(e, bit_index)); // 3, 14
}