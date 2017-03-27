//
// Created by Renming on 2017-03-24.
//
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
#include <algorithm>
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
    mQueue cheat;
    int numberOfOperations;
    std::string str;
    std::getline(cin,str);
    numberOfOperations = stoi(str);
    for(int i =0; i< numberOfOperations; i++){
        std::getline(cin,str);
        switch(str[0]){
            case '-' : cheat.pop();
                break;
            case '?' : cout<<cheat.min<<'\n';
                break;
            case '+' : cheat.push(std::stoi(str.substr(1)));
                break;
        }

    }
    return 0;
}
//
// Created by Renming on 2017-03-24.
//

