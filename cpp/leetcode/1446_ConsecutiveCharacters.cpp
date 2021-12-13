/*
1. 先處理input
2. 設定一個c為第一個char，並且count = 1, res = 1
3. 如果下一個值跟前一個值一樣，count++，如果不一樣，count更新成1，c更新成新的值
4. res = max(res, count)
*/
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxPower(string s) {
        char c = s[0];
        int count = 1, res = 1, n = s.length();
        for(int i=1; i<n; i++){
            if(s[i] == c) count++;
            else{
                c = s[i];
                count = 1;
            }
            res = max(res, count);
        }
        return res;
    }
};

int main(){
    // string s; cin >> s;
    Solution sol;
    // cout << sol.maxPower(s) << "\n";
    if(sol.maxPower("leetcode") == 2) cout << "pass\n";
    else cout << "not pass\n";
    if(sol.maxPower("abbcccddddeeeeedcba") == 5) cout << "pass\n";
    else cout << "not pass\n";
    if(sol.maxPower("triplepillooooow") == 5) cout << "pass\n";
    else cout << "not pass\n";
    if(sol.maxPower("hooraaaaaaaaaaay") == 11) cout << "pass\n";
    else cout << "not pass\n";
    if(sol.maxPower("tourist") == 1) cout << "pass\n";
    else cout << "not pass\n";
}