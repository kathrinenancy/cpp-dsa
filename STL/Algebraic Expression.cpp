#include <bits/stdc++.h>
using namespace std;

int precedence(char op){
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    if(op == '^') return 3;
    return 0;
}

class solution {
    public:
    string regularAlgebraicExp(string s) {
        string final_str = "";
        stack <char> stk;
        for(auto i : s){
            if(isalpha(i)){
                final_str += i;
            }
            else if(i=='('){
                stk.push(i);
            }
            else if(i==')'){
                while(!stk.empty() && stk.top() != '('){
                    final_str += stk.top();
                    stk.pop();
                }
                if(!stk.empty())
                stk.pop();
            }
            else {
                while(!stk.empty() && precedence(stk.top()) >= precedence(i)){
                    final_str += stk.top();
                    stk.pop();
                }
                stk.push(i);
            }
        }
        
        while(!stk.empty()){
            final_str += stk.top();
            stk.pop();
        }
        return final_str;
    }
};