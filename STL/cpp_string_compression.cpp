#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string strCompression(string s) {
        int s_len = s.length();
        char current = s[0];
        int count = 1;
        string op_string= "";
        for(int i=1; i<=s_len; i++){
            if(current == s[i]){
                count++;
            }
            else{
                op_string += current+to_string(count);
                current = s[i];
                count = 1;
            }
        }
        
        int op_len = op_string.length();
        if(op_len<s_len){
            return op_string;
        }
        else{
            return s;
        }
    }
};