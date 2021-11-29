/*
    linked list
    1. linked list反轉
    2. linkedlist head，不知道多長，找到前半段的最大值
    3. 一個non-empty linked-list找middle node的值，如果有兩個middle node，return second middle node.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
struct Node{
    int val;
    struct Node* next;
};

void printlist(struct Node* n){
    while(n!=NULL){
        printf(" %d ", n->val);
        n = n->next;
    }
    printf("\n");
}

void linkedlist_1(struct Node** n){
    if(n == NULL) return ;
    struct Node* pre = NULL;
    struct Node* cur = *n;
    struct Node* nxt = (*n)->next;
    while(cur!=NULL && nxt!=NULL){
        cur->next = pre;
        pre = cur;
        cur = nxt;
        nxt = cur->next;
    }
    cur->next = pre;
    *n = cur;
}

int linkedlist_2(struct Node* n){
    int node_max = INT32_MIN;
    struct Node* slow = n;
    struct Node* fast = n;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        if(slow->val > node_max) node_max = slow->val;
        slow = slow->next;
        fast = fast->next->next;
    }
    return node_max;
}

struct Node* linkedlist_3(struct Node* n){
    struct Node* slow = n;
    struct Node* fast = n;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    struct Node* head;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->val = 0;
    struct Node* cur = head;

    for(int i=1; i<5; i++){
        struct Node* nxt;
        nxt = (struct Node*)malloc(sizeof(struct Node));
        nxt->val = i;
        nxt->next = NULL;
        cur->next = nxt;
        cur = cur->next;
    }

    printlist(head);
    printf("half max = %d\n", linkedlist_2(head));
    linkedlist_1(&head);
    printlist(head);
    printf("half max = %d\n", linkedlist_2(head));
    printf("middle node = %d\n", linkedlist_3(head)->val);
}