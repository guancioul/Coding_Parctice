#include <stdio.h>
#include <iomanip>
#include <stdlib.h> /* atoi */
#include <ctype.h>
#include <string>
#include <stack>
#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <math.h>
#include <cmath>
#include <limits>
#include <algorithm>
#include <numeric> // std::accumulate
using namespace std;
#define ll long long
#define PI acos(-1)

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        int c = 0;
        ListNode newHead(0);
        ListNode *t = &newHead;
        while(c || l1 || l2) {
            c += (l1? l1->val : 0) + (l2? l2->val : 0);
            t->next = new ListNode(c%10);
            t = t->next;
            c /= 10;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return newHead.next;
    }
};
 
int main(){
    ListNode* l1 = new ListNode();
    ListNode* l2 = new ListNode();
    ListNode* cur_l1 = l1;
    ListNode* cur_l2 = l2;

    cur_l1->next = new ListNode(2);
    cur_l1 = cur_l1->next;
    cur_l1->next = new ListNode(4);
    cur_l1 = cur_l1->next;
    cur_l1->next = new ListNode(3);

    cur_l2->next = new ListNode(5);
    cur_l2 = cur_l2->next;
    cur_l2->next = new ListNode(6);
    cur_l2 = cur_l2->next;
    cur_l2->next = new ListNode(4);

    Solution sol;
    ListNode* res = sol.addTwoNumbers(l1, l2);
    ListNode* cur = res->next;
    while(cur){
        cout << cur->val << " ";
        cur = cur->next;
    }
    return 0;
}