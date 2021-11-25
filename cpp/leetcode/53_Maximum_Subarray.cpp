/*
53. Maximum Subarray
https://leetcode.com/problems/maximum-subarray/

Example 1
9
-2 1 -3 4 -1 2 1 -5 4

Example 2
1
1

Example 3
5
5 4 -1 7 8

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>& nums){
        return maxSubArray_dp(nums);
        //return maxSubArray_DaC(nums, 0, nums.size()-1);
    }
    private:
    // dp
    int maxSubArray_dp(vector<int>& nums){
        int res = nums[0], temp = nums[0], n = nums.size();
        for(int i=1; i<n; i++){
            temp = max(nums[i]+temp, nums[i]);
            res = max(temp, res);
        }
        return res;
    }
    // Divide and Conquer
    //int maxSubArray_DaC(vector<int>& nums, int l, int r){
    //    if() 
    //}
};

int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    Solution Sol;
    int res = Sol.maxSubArray(nums);
    cout << res << "\n";
    return 0;
}
