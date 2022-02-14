#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

struct node {
    int val;
    struct node* left;
    struct node* right;
};

struct node* new_node(int key) {
    struct node* p;
    p = malloc(sizeof(struct node));
    p->val = key;
    p->left = NULL;
    p->right = NULL;

    return p;
};

void quiz_1(int nums) {
    /*
        寫一個function，計算輸入有幾個1
    */
    int count = 0;
    while(nums>0) {
        nums &= nums-1;
        count++;
    }
    printf("%d\n", count);

}

void quiz_2(int nums) {
    /*
        判斷是不是質數 
    */
    bool isPrime = 1;
    if(nums>0 && nums<2) {
        isPrime = 1;
    }else if(nums<=0) {
        isPrime = 0;
    }else{
        for(int i=3; i<=sqrt(nums); i++){
            if(nums%i==0) isPrime = 0;
        }
    }
    if(isPrime) {
        printf("is prime\n");
    }else {
        printf("not prime\n");
    }
}

int main() {
    int nums = 7;
    quiz_1(nums);
    quiz_2(nums);

    struct node* testnode = new_node(7);
    
    printf("%d\n", testnode->val);
    return 0;
}