#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    // my solution 
    // runtime: 67ms, 27.69%
    // Memory: 36.2MB
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0, res = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                temp++;
            }else {
                temp = 0;
            }
            res = max(temp, res);
        }
        return res;
    }

    // Discuss
    // Runtime: 35ms, 80.75%
    // Memory: 36.2MB
    static auto __ = []()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        return 0;
    }();
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0, res = 0;
        for(auto n: nums) {
            if(n == 1) {
                temp++;
            }else {
                temp = 0;
            }
            res = max(temp, res);
        }
        return res;
    }

};

int main() {
    Solution sol;
    vector<int> ex1 = {1,1,0,1,1,1};
    if(sol.findMaxConsecutiveOnes(ex1) == 3) {
        cout << "pass\n";
    }else {
        cout << "error\n";
    }

    vector<int> ex2 = {1,0,1,1,0,1};
    if(sol.findMaxConsecutiveOnes(ex2) == 2) {
        cout << "pass\n";
    }else {
        cout << "error\n";
    }
    return 0;
}