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

class Duck {

public:
    Duck(){}
    ~Duck(){}
    //定義一個虛擬函式display
    virtual void display(){
        std::cout<<" I am a Duck !"<<std::endl;
    }

};

class RedHandDuck:public Duck{
public:
    RedHandDuck(){}
    ~RedHandDuck(){}
    //重寫display
    void display(){
        std::cout<<" I am a RedHandDuck !"<<std::endl;
    }

};

int main(){
    RedHandDuck* duck1 = new RedHandDuck();
    Duck* duck2 = duck1;

    duck1->display();
    duck2->display();

    std::getchar();

}
