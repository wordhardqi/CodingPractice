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
#define wtf unsigned long long int

class SnowMan{
public:
    wtf amount;
    wtf top;
    std::shared_ptr<SnowMan> parent;
    inline void executeCommand(int a, wtf b,std::vector<std::shared_ptr<SnowMan>>& peers){
        if(b != 0){
            this->top = b;
            this->parent = peers[a];
            this->amount = this->parent->amount + b;

        }else{
            this->amount = peers[a]->amount - peers[a]->top;
            std::shared_ptr<SnowMan> curParent = peers[a];
            while(curParent->amount>this->amount){
                curParent = curParent->parent;
            }
            this->top = curParent->top;
            this->parent = curParent->parent;
        }
//        std::cout<<"parent of "<<peers.size()+1<<" is "<<this->parent<<std::endl;

    }
};
int main() {
    std::string str;
    wtf numberOfAction;
    cin>>numberOfAction;
    int a,b;
    std::vector<std::shared_ptr<SnowMan>> peers(numberOfAction+1);
    for (int i=0;i<(numberOfAction+1);i++){
        std::shared_ptr<SnowMan> p(new SnowMan);
        peers[i] = p;
    }
    std::shared_ptr<SnowMan> emptySnowMan=peers[0];
    emptySnowMan->amount=0;
    emptySnowMan->parent=0;
    emptySnowMan->top =0;
    peers.push_back(emptySnowMan);
    int i=0;
    while (cin>>a &&cin>>b){
        i++;
//        std::cout<<"a,b"<<a<<" "<<b<<std::endl;
        peers[i]->executeCommand(a,b,peers);
    }
    wtf total =0;
    for(auto &i : peers){
        total +=i->amount;
    }
    cout<<total<<std::endl;

}
//
// Created by Renming on 2017-03-24.
//


