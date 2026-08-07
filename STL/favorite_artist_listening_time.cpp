#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int totalListeningMinutes(int N,int K,int M,vector<pair<int, string>> &songs,vector<string> &favorit0eArtists){
        int totalDuration = 0;
        
        for(auto i : songs){
            int duration = i.first;
            string artist = i.second;
            if(find(favorit0eArtists.begin(), favorit0eArtists.end(), artist) != favorit0eArtists.end()){
                if(duration >= K){
                    totalDuration += duration;
                }
            }
        }
        
        return totalDuration;
    }
};