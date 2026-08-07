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