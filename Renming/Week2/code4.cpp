//
// Created by Renming on 2017-03-25.
//

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
    int numberOfOperations;
    std::string strnum;
    std::getline(cin,strnum);
    int i=0;
    numberOfOperations = stoi(strnum);
    #ifndef JUDGE
    std::cout<<numberOfOperations<<std::endl;
    #endif
    std::stack<int> cheat;
    std::string str;
    for(int i =0; i< numberOfOperations; i++){
        #ifndef JUDGE
        std::cout<<i<<std::endl;
        #endif
        while(!cheat.empty()) cheat.pop();
        std::getline(cin,str);
        bool stopFlag = false;
        switch (str[0]){
            case '(': cheat.push(1);stopFlag= false;
                break;
            case '[': cheat.push(2);stopFlag = false;
                break;
            case ')': stopFlag = true;break;
            case ']': stopFlag = true;break;
        }
        if(stopFlag){
            cout<<"NO\n";
            #ifndef JUDGE
            std::cout<<i<<"-NO1 hit at "<<str<<std::endl;
            #endif
            continue;
        }
        int symbolMap = 0;
        bool failureFlag = false;
        for(int j=1;j< str.size();j++){
           switch(str[j]){
               case '(':symbolMap =1;break;
               case ')':symbolMap =3;break;
               case '[':symbolMap =2;break;
               case ']':symbolMap =4;break;
           }
           if(symbolMap<=2){
               cheat.push(symbolMap);
           } else if(cheat.empty()) {
               failureFlag = true;
               break;
           }else if(symbolMap-cheat.top()==2){
                   cheat.pop();
           } else{
                   break;
           }

        }

        if(cheat.empty()&&!failureFlag){
            cout<<"YES\n";
            #ifndef JUDGE
            std::cout<<i<<"-YES hit at "<<str<<std::endl;
            #endif
        } else{
            cout<<"NO\n";
            #ifndef JUDGE
            std::cout<<i<<"-NO2 hit at "<<str<<std::endl;
            #endif
        }

    }
    cout<<std::endl;
    return 0;
}
//
// Created by Renming on 2017-03-24.
//

