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

class Solution {
    public:
    int findmax(vector<int> vec){
        int m = vec[0], res = 0;
        for(int i=1; i<vec.size(); i++){
            if(vec[i]<m){
                res+=i*(m-vec[i]);
                m = vec[i];
            }else{
                res+=vec[i]-m;
            }
        }
        return res;
    }
};
 
int main(){
    Solution Sol;
    cout << Sol.findmax({6, 8, 8, 5, 5}) << "\n"; 
    return 0;
}