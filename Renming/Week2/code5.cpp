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
#include <algorithm>

int main() {
    std::string str;
    std::getline(cin,str);
    std::stack<int> cheat;
    int numOfChars = stoi(str);
    int i=0;
    std::getline(cin,str);
    str.erase(std::remove_if(str.begin(),str.end(),[](char x){return x==' ';}),str.end());
    for(auto i = str.cbegin();i!=str.cend();i++){
        if(*i>=48 && *i<=57){
            cheat.push(*i - 48);
        } else{
            int operand2 = cheat.top();
            cheat.pop();
            int operand1 = cheat.top();
            cheat.pop();
            int opresult =0;
            switch(*i){
                case '+': opresult= operand1+operand2;break;
                case '-': opresult= operand1-operand2;break;
                case '*': opresult= operand1*operand2;break;
            }
            cheat.push(opresult);
        }
    }
    cout<<cheat.top()<<std::endl;
    return 0;
}
//
// Created by Renming on 2017-03-24.
//


