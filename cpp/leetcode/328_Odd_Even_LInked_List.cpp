/*
思考過程
1. 先判斷head跟head的下一個是不是空的，如果是的話直接回傳head
2. 設定一個cur是目前的位置，目前的位置可以直接設在第三個值
3. head是odd的head，要多設定一個head_even來表示even的head
4. cur_odd是odd的cur，cur_even是even的cur，主要是用來走訪的
5. 設定一個switch，主要是要看要把值加在cur_odd還是cur_even
6. 如果cur == null，跳出while
7. 把cur_odd的結尾接在head_even上，並且回傳head 

Runtime: 8 ms, faster than 91.52%
Memory Usage: 10.6 MB, less than 27.45%

Discuss
Runtime: 8ms, faster than 91.52%
Memory Usage: 10.4 MB, less than 72.02%
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(0), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head){
        if(head==nullptr || head->next == nullptr) return head;
        int count = 0;
        ListNode* cur = head->next->next;
        ListNode* head_even = head->next;
        ListNode* cur_odd = head;
        ListNode* cur_even = head_even;
        while(cur!=nullptr){
            count++;
            if(count%2==0){
                cur_even->next = cur;
                cur_even = cur_even->next;
            }else{
                cur_odd->next = cur;
                cur_odd = cur_odd->next;
            }
            cur = cur->next;
        }
        cur_even->next = nullptr;
        cur_odd->next = head_even;
        return head;
    }

    ListNode* oddEvenList_sol(ListNode* head){
        if(!head || !head->next || !head->next->next) return head;
        ListNode* odd = head;
        ListNode* even = head->next; 
        ListNode* even_start = head->next;

        while(odd->next && even->next){
            odd->next = even->next;
            even->next = odd->next->next;
            odd = odd->next;
            even = even->next;
        }

        odd->next = even_start;
        return head;
    }
};

int main(){
    ListNode* head = new ListNode();
    ListNode* cur = head;
    int n; cin >> n; 
    for(int i=0; i<n; i++){
        int num; cin >> num;
        cur->next = new ListNode(num);
        cur = cur->next;
    }
    cur = head;
    head = head->next;
    delete cur;
    Solution sol;
    sol.oddEvenList_sol(head);
    cur = head;
    while(cur!=nullptr){
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << "\n";
    return 0;
}