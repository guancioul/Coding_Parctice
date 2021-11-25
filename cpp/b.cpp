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

struct Linklist{
    Linklist* next;
    int val;
    Linklist() : next(nullptr), val(0) {}
    Linklist(int num) : next(nullptr), val(num) {}
};

class LinkedList{
    public:
    Linklist* l;
    Linklist* cur_l;
    LinkedList(){
        l = nullptr;
        cur_l = l;
    }

    void append(int num){
        cur_l->next = new Linklist(num);
        cur_l = cur_l->next;
    }
    bool find(int num){
        Linklist* cur = l->next;
        while(cur){
            if(cur->val = num) return true;
            cur = cur->next;
        }
        return false;
    }
    void remove(int num){
        Linklist* cur = l->next;
        Linklist* pre = l;
        if(cur->val == num){
            pre->next = cur->next;            
            delete cur;
            return ;
        }
        cur = cur->next;
        while(cur){
            if(cur->val == num){
                pre->next = cur->next;
                delete cur;
                return;
            }
            pre = pre->next;
            cur = cur->next;
        }
        
    }
};
 
int main(){
    LinkedList link;
    link.append(2);
    return 0;
}