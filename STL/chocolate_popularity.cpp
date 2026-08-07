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