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
int main() {
    std::string str;
    unsigned long int numberOfAction;
    cin>>numberOfAction;
    unsigned long  int a,b;
    std::vector<std::stack<unsigned  long   int>> tracer;
//    tracer.reserve(numberOfAction+1);
    std::vector<unsigned  long> amount;
//    amount.reserve(numberOfAction+1);
    std::stack<unsigned  long> tmp;
    tmp.push(0);
    tracer.push_back(tmp);
    amount.push_back(0);
    unsigned long i=0;
    while(cin>>a&&cin>>b) {
        if(b!=0){
            std::stack<unsigned  long int> ori = tracer[a];
            ori.push(b);
            tracer.push_back(ori);
            amount.push_back(amount[a]+b);
        }else if(b==0){
            std::stack<unsigned long int> ori = tracer[a];
            unsigned long reduction = ori.top();
            ori.pop();
            tracer.push_back(ori);
            amount.push_back(amount[a]-reduction);
        }
    }
    unsigned long int  total =0;
    for(auto &i : amount){
        total +=i;
    }
    cout<<total<<std::endl;

}
//
// Created by Renming on 2017-03-24.
//


