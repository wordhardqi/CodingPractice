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
#include <deque>

int main() {
//    std::deque<int> dq1;
//    std::deque<int> dq2;
    auto first = std::make_shared<std::deque<int>>();
    auto second= std::make_shared<std::deque<int>>();
    std::string str;
    std::getline(cin,str);
    int numOfOperation =std::stoi(str);
    std::string opStr;
    std::string numStr;
    while (cin>>opStr){
        switch (opStr[0]){
            case 'a':
                cin>>numStr;
                second->push_back(std::stoi(numStr));
                while (first->size()+1<second->size()){
                    int val = second->front();
                    first->push_back(val);
                    second->pop_front();
                }
                break;
            case 't':
                second->pop_back();
                while(first->size()>second->size()){
                    int val = first->back();
                    first->pop_back();
                    second->push_front(val);
                }
                break;
            case 'm':
                first.swap(second);
                while(first->size()>second->size()){
                    int val = first->back();
                    first->pop_back();
                    second->push_front(val);
                }

        }
    }
    cout<<first->size()+second->size()<<std::endl;
    for(auto &i :*first){
        cout<<i<<" ";
    }
    for(auto &i : *second){
        cout<<i<<" ";
    }


}
//
// Created by Renming on 2017-03-24.
//



