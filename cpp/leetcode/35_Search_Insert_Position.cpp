/*
35. Search Insert Position
https://leetcode.com/problems/search-insert-position/
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;

class Solution{
public:
    int searchInsert(vector<int>& nums, int target){
        int l = 0, r = nums.size();
        while(l<r){
            int m = (l+r)/2;
            if(nums[m]==target)
                return m;
            else if(nums[m]>target)
                r = m;
            else
                l = m+1;
        }
        return l;
    }
};

int main(){
    Solution Sol;
    cout << "Example 1: \n";
    int res = Sol.searchInsert({1,3,5,6}, 5);
    cout << res << "\n"; // 2
    cout << "Example 2: \n";
    res = Sol.searchInsert({1,3,5,6}, 2);
    cout << res << "\n"; // 1
    cout << "Example 3: \n";
    res = Sol.searchInsert({1,3,5,6}, 7);
    cout << res << "\n"; // 4
    cout << "Example 4: \n";
    res = Sol.searchInsert({1,3,5,6}, 0);
    cout << res << "\n"; // 0
    cout << "Example 5: \n";
    res = Sol.searchInsert({1}, 0);
    cout << res << "\n"; // 0
    return 0;
}