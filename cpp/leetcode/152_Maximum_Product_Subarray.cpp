/*
解題流程
1. 先處理好input
2. 想解題的思路
3. 解不出來就先看答案，之後再重新做一次

解題思路
1. 這題的方法應該會跟最大加總區間的dp有關係
2. 目前看起來，除非遇到0，要不然都是用一樣的方法處理
3. temp是把值全部連加，res是temp跟res中的最大值
4. 如果遇到0的話，temp更新到0的下一個值
[3,-1,4], [2,-5,-2,-4,3] 這些情況會遇到問題

答案解題思路


*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int temp = nums[0], res = nums[0], n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] == 0){
                temp *= nums[i];
                res = max(res, 0);
            }else{
                if(temp == 0) temp+=nums[i];
                else temp *= nums[i];
                res = max(max(res, temp), nums[i]);
            }
        }
        return res;
    }
};

int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    Solution sol;
    cout << sol.maxProduct(nums) << "\n";
    return 0;
}