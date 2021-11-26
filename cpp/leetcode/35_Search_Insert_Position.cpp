/*
35. Search Insert Position
https://leetcode.com/problems/search-insert-position/

Example 1
4
1 3 5 6
5
Output: 2

Example 2
4
1 3 5 6
2
Output: 1

Example 3
4
1 3 5 6
7
Output: 4

Example 4
4
1 3 5 6
0
Output: 0

Example 1
1
1
0
Output: 0
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
    int n, target; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    cin >> target;
    Solution Sol;
    int res = Sol.searchInsert(nums, target);
    cout << res << "\n";
    return 0;
}