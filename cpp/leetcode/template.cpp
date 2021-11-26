/*

*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;

class Solution{
public:
    int func_name(vector<int>& nums, int target){
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
    int res = Sol.func_name(nums, target);
    cout << res << "\n";
    return 0;
}