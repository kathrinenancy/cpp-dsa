/*
Problem: Polycrap Loves Music

Description:
After a long day of coding challenges, Polycrap decides to relax by
listening to music. However, Polycrap only listens to songs that satisfy
both of the following conditions:

1. The song duration must be greater than or equal to K minutes.
2. The song must be performed by one of Polycrap's favorite artists.

You are given:
- K: The minimum duration required for a song.
- favoriteArtists: A list of M favorite artists.
- songs: A list of N songs, where each song contains:
    - duration: The length of the song in minutes.
    - artistName: The artist who performed the song.

Return the total number of minutes Polycrap spends listening to songs
that satisfy both conditions.

Topic: C++ STL
Concepts: vector, pair, string.
*/

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
