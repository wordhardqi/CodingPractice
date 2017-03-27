//
// Created by Renming on 2017-03-24.
//
#ifdef JUDGE
#include <fstream>
#include <iostream>
std::ifstream cin("input.txt");
std::ofstream cout("output.txt");
#else
#include <fstream>
#include <iostream>
std::ifstream cin("../input.txt");
std::ofstream cout("../output.txt");
#endif
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
#include <numeric>
#include <memory>
#include <queue>
#include <sstream>
#include <functional>
#define wtf unsigned long long int
template <class T, class S, class C>
S& Container(std::priority_queue<T, S, C>& q) {
    struct HackedQueue : private std::priority_queue<T, S, C> {
        static S& Container(std::priority_queue<T, S, C>& q) {
            return q.*&HackedQueue::c;
        }
    };
    return HackedQueue::Container(q);
}

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int> > cheat;
    int numberOfOperation;
    std::string str;
    std::getline(cin,str );
    numberOfOperation = stoi(str);
    std::getline(cin,str);
    std::stringstream ss(str);
    int cupWater;
    ss>>cupWater;
    cheat.push(1);
    int curMin =0;
    while(ss>>cupWater){
        if(cupWater==0){
            curMin = cheat.top();
            curMin +=1;
            cheat.pop();
            cheat.push(curMin);
        } else{
            cheat.push(1);
        }
    }
    int v=0;
    std::vector<int> &tasks = Container(cheat);
    cout<<*(std::max_element(tasks.begin(),tasks.end()))<<'\n';
}
//
// Created by Renming on 2017-03-24.
//


