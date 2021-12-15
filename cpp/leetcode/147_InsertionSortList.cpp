#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

bool compareLinkedList(ListNode* list1, ListNode* list2) {
    while(list1) {
        if(list1 -> val != list2 -> val) return false;
        list1 = list1 -> next;
        list2 = list2 -> next;
    }
    return true;
}

void printLinkedList(ListNode* head) {
    ListNode* cur = head;
    while(cur){
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << "\n";
}

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = head;
        ListNode* pre = dummy;
        while(cur) {
            if(cur->next && cur->next->val < cur->val){
                while(pre->next && pre->next->val < cur->next->val){
                    pre = pre->next;
                }
            }
            while(true) {
                if(temphead->next && temphead->next->val < cur->val)
                    temphead = temphead->next;
                else
                    break;
            }
            ListNode* nxt = cur->next;
            if(temphead==head){
                cur->next = head;
                pre->next = nxt;
                head = cur;
                pre = cur;
                cur = nxt;
            }else{
                cur->next = temphead->next;
                temphead->next = cur;
                cur->next->next = nxt;
                pre = cur;
                cur = nxt;
            }
            if(cur->val < temphead->val) {
                cout << temphead->val << "\n";
            }else{
                pre = cur;
                cur = cur->next;
            }
            printLinkedList(head);
        }
        return head;
    }
};

ListNode* stringtoListNode(string input) {
    input = input.substr(1, input.length()-1);
    if(input.empty()) return nullptr;
    stringstream ss;
    ss.str(input);

    string item;
    getline(ss, item, ',');
    ListNode* head = new ListNode(stoi(item));
    ListNode* cur = head;
    
    while(true) {
        if(!getline(ss, item, ',')) break;
        cur -> next = new ListNode(stoi(item));
        cur = cur -> next;
    }

    return head;
}

int main() {
    Solution sol;
    ListNode* ans = sol.insertionSortList(stringtoListNode("[4,2,1,3]"));
    ans = sol.insertionSortList(stringtoListNode("[-1,5,3,4,0]"));
    //cout << compareLinkedList(ans, stringtoListNode("[1,2,3,3]")) << "\n"; 
    return 0;
}