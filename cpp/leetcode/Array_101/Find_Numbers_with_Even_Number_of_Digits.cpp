#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public: 
    // Runtime: 4ms, 90.77%
    // Memory Usage: 9.9MB
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(auto num:nums) {
            int count = 0;
            while(num) {
                num/=10;
                count++;
            }
            if(count%2 == 0) {
                res++;
            }
        }
        return res;
    }
}

int main() {
    Solution sol;
    vector<int> ex1 = {12,345,2,6,7896};
    if(sol.findNumbers(ex1) == 2) {
        cout << "pass\n";
    }else {
        cout << "error\n";
    }

    vector<int> ex2 = {12,345,2,6,7896};
    if(sol.findNumbers(ex2) == 1) {
        cout << "pass\n";
    }else {
        cout << "error\n";
    }
    return 0;
}