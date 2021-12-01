#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums){
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        nums[1] = max(nums[0], nums[1]);
        for(int i=2; i<n; i++){
            nums[i] = max(nums[i-2]+nums[i], nums[i-1]);
        }
        return nums[n-1];
    }
};

int main(){
    Solution sol;
    vector<vector<int>> test = {{1,2,3,1},//4
                                {2,7,9,3,1},//12
                                {1,2,2,1},//3
                                {2,4,8,9,9,3},//19
                                {7,10,10,1,1},//18
                                {0},//0
                                {1,2},//2
                                {1,7,3},//7
                                {2,1,1,2}//4
                                        };
    for(int i=0; i<test.size(); i++){
        cout << sol.rob(test[i]) << "\n";
    }
    return 0;
}