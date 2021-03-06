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

typedef struct binarysearchtree {
    int data;
    struct binarysearchtree* left;
    struct binarysearchtree* right;
}BST,*PBST;

BST* newNode(int key) {
    BST *p;
    p = malloc(sizeof(newNode));
    p->data = key;
    p->left = NULL;
    p->right = NULL;

    return p;
};

BST* insert(int key, BST* root) {
    if(root == NULL) {
        return newNode(key);
    }
    if(key>root->data) {
        root->right = insert(key, root->right);
    }else if(key<root->data){
        root->left = insert(key, root->left);
    }
    return root;
};

BST* search(int key, BST* root) {
    if(root == NULL || root->data == key) {
        return root;
    }
    if(key > root->data)
        return search(key, root->right);
    return search(key, root->left);
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

int isPrime(int n){
    int temp[n+1];
    temp[2] = 1;
    for(int i=2; i<n+1; i++){
        for(int j=i; j<n/i)
    }
    return count;
}

void printNode(BST* root) {
    if(root == NULL) return ;
    printf("%d\n", root->data);
    printNode(root->left);
    printNode(root->right);
}

int main() {
    // 1. 寫一個function，計算輸入有機個1
    //printf("%d\n", count_bit_1(5));
    
    // 2. 求出一個值是不是質數
    //printf("%d\n", isPrime(23));

    // 3. Binary Tree
    BST* root = NULL;
    root = insert(2, root);
    insert(7, root);
    insert(1, root);
    insert(3, root);
    search(7, root);
    search(5, root);
    printNode(root);
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