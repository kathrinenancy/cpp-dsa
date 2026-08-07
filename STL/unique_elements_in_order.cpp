/*
Problem: Unique Elements in Order

Description:
In a sequence of integers arr of size n, identify the numbers that
appear exactly once.

The unique numbers must be returned in the same order in which they
originally appeared in the array.

It is guaranteed that at least one number appears exactly once.

Task:
Return all the numbers that occur only once in arr while preserving
their original order.

Topic: C++ STL
Concepts: vector, map
*/


#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    vector<int> uniqueOrder(int n, vector<int> &arr) {
        map<int,int> mpp;
        vector<int> v;
        for(auto i:arr) mpp[i]++;
        for(auto i:arr){
            if(mpp[i] == 1){
                v.push_back(i);
            }
        }
        
        return v;
    }
};
