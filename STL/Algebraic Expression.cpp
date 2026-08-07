/*
Problem: Reverse Polish Notation (RPN)

Description:
A research lab uses an old stack-based calculator that cannot evaluate
normal infix expressions such as:

    a + (b - c)

Instead, the calculator uses Reverse Polish Notation (RPN).

How the calculator works:
1. Symbols are read from left to right.
2. When an operand (letter) is encountered, it is pushed onto a stack.
3. When an operator is encountered, the calculator:
   - Pops the last two operands from the stack.
   - Applies the operator to them.
   - Pushes the result back onto the stack.

Properties of RPN:
- Operators appear after their operands.
- Brackets are not required.
- Every valid expression has exactly one RPN representation.

Task:
Process the given expression according to the rules of Reverse Polish
Notation and determine the required result.

Topic: Stack / C++ STL
Concepts: stack, push, pop, string.
*/


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
