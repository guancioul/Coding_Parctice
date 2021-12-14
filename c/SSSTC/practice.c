#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int count_bit_1(int n){
    int count = 0;
    while(n) {
        if(n&1) count++;
        n>>=1;
    }
    return count;
}

int isPrime(int n){
    if(n<3 && n>0) return 1;
    if(n%2==0){
        return 0;
    }else{
        for(int i=3; i<=sqrt(n); i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    return 0;
}

int main() {
    // 1. 寫一個function，計算輸入有機個1
    printf("%d\n", count_bit_1(5));
    
    // 2. 求出一個值是不是質數
    printf("%d\n", isPrime(23));
    return 0;

    // 3. Binary Tree

}