//
// Created by Renming on 2017-03-24.
//
#define haha unsigned int
#ifdef JUDGE
#include <fstream>
std::ifstream cin("input.txt");
std::ofstream cout("output.txt");
#else
#include <fstream>
#include <iostream>
std::ifstream cin("../input.txt");
std::ofstream cout("../output.txt");
#endif
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <list>


class mQueue{
    std::queue<int> cheat;
    std::deque<int> cheatAgain;
public:
    int min ;
    inline void pop(){
        if(this->cheat.front()==this->cheatAgain.front()){
            this->cheat.pop();
            this->cheatAgain.pop_front();
            this->min = this->cheatAgain.front();
        } else{
            this->cheat.pop();
        }

    }
    inline void push(int n){
        if(!this->cheat.empty()){
//            auto i = this->cheatAgain.begin();
//            while(i!=this->cheatAgain.end()&& *i <=n) ++i;
//            this->cheatAgain.erase(i,this->cheatAgain.end());
            auto i = this->cheatAgain.rbegin();
            while (i!=this->cheatAgain.rend()&& *i>n) ++i;
            this->cheatAgain.erase(i.base(),this->cheatAgain.end());
        }
        this->cheat.push(n);
        this->cheatAgain.push_back(n);
        this->min = this->cheatAgain.front();

    }

};
int main() {
    std::list<int > cheat;
    cheat.push_back(1);
    cheat.push_back(2);
    cheat.push_back(3);
    cheat.insert(cheat.cbegin(),4);
    auto starter= cheat.cbegin();
    --starter;
    std::cout<<*starter;
    --starter;
    std::cout<<*starter;
    --starter;
    std::cout<<*starter;
    return 0;
}
//
// Created by Renming on 2017-03-24.
//

//
// Created by Renming on 2017-03-25.
//

