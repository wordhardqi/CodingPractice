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

int main() {
    std::stack<long> cheat;
    int numberOfOperations;
    cin>> numberOfOperations;
    std::string str;
    char symbol=0;
    std::getline(cin,str);
    for(int i =0; i< numberOfOperations; i++){
        std::getline(cin,str);
        if(str[0]== '-'){
            cout<<cheat.top()<<'\n';
            cheat.pop();
        }
        else{

            cheat.push(std::stol(str.substr(1)));
        }
    }


    return 0;
}
