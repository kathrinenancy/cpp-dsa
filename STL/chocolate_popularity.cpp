/*In a classroom, a teacher has prepared

types of questions, labeled from A to Z and a to z

Students attempt these questions during a test.

Whenever any student correctly solves a

question, the teacher gives one chocolate for that solution.

Additionally, the first student to solve a particular

question receives one extra chocolate as a bonus for being the first.

You are given a string s, where each character represents the question that was solved at that

moment, in the order solutions happened.

No question is solved more than once by the same student, and some questions might not be solved by anyone at all.

Based on this sequence, determine how many chocolates the teacher distributed in total. 

Input Format:

The input contains a string containing

a - z and A - Z letters.

Output Format:

• The total number of chocolates the teacher distributes in total.*/




#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<string> chocolatePopularity(int n, vector<string>& chocolates) {
        map <string,int> mpp;
        for(auto i : chocolates) mpp[i]++;
        
        vector<string>result;
        
        for(auto i : mpp){
           result.push_back(i.first);
        }
        
        sort(result.begin(), result.end(), [&](const string &a, const string &b){
            if (mpp[a] != mpp[b])
                return mpp[a] > mpp[b];
            return a<b;
        });
        
        return result;
    }
};