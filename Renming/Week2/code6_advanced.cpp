//
// Created by Renming on 2017-03-24.
//
#ifdef JUDGE
#include <fstream>
#include <iostream>
std::ifstream cin("input.txt");
FILE* file = fopen (file_name, "r");
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
#define wtf unsigned long long int

class SnowMan{
public:
    wtf amount;
    wtf top;
    SnowMan* parent;
    SnowMan() :amount(0),top(0),parent(nullptr) {}

    inline void executeCommand(wtf a, wtf b, std::vector<SnowMan>& peers){
        if(b != 0){
            this->top = b;
            this->parent = &peers[a];
            this->amount = peers[a].amount + b;

        }else{
            this->amount = peers[a].amount - peers[a].top;
            SnowMan* curParent = &peers[a];
            while(curParent->amount>this->amount){
                curParent = curParent->parent;
            }
            this->top = curParent->top;
            this->parent = curParent->parent;
        }
//        std::cout<<"parent of "<<peers.size()<<" is "<<this->parent<<std::endl;

    }
};
int main() {
    std::string str;
    wtf numberOfAction;
    cin>>numberOfAction;
    wtf a,b;
    std::vector<SnowMan> peers(numberOfAction+1);
    wtf i=0;
    while (cin>>a &&cin>>b){
        i++;
//       std::cout<<"a,b"<<a<<" "<<b<<std::endl;
        peers[i].executeCommand(a,b,peers);
    }
    wtf total =0;
    for(auto &i : peers){
        total +=i.amount;
    }
    cout<<total<<std::endl;

}
//
// Created by Renming on 2017-03-24.
//


