#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int input_count;
    cin >> input_count;
    for(int i=0; i<input_count; i++){
        int a,b;
        cin >> a >> b;
        if(a==1){
            s.insert(b);
        }else if(a==2){
            s.erase(b);
        }else{
            set<int>::iterator itr = s.find(b);
            if(itr!=s.end()) cout << "Yes\n";
            else cout << "No\n"; 
        }
    }
    return 0;
}
