/*
Problem Description

Bob is building a chat app that stores text messages efficiently.

To save space, he wants to compress repeated characters in a message.

    The compression rule is consecutive repeated characters are replaced by character + count

    The count is always included, even if it's 1

Can you help Bob to find the compressed string as he is busy.

    If the compressed string length is greater than or equal to the original string, return the original string instead.*/


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
