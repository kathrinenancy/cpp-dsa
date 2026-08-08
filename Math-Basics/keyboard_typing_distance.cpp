#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int calculateTypingDistance(string text) {
        vector<string> grid = {"qwertyuiop","asdfghjkl","zxcvbnm"};
        int totDistance = 0;
        int prevRow = 1;
        int prevCol = 0;
        for(auto k : text){
            for(int i=0; i<grid.size(); i++){
                string s = grid[i];
                for(int j=0; j<s.size(); j++){
                    char ch = grid[i][j];
                    if(ch == k){
                        totDistance += abs(prevRow-i)+abs(prevCol-j);
                        prevRow = i;
                        prevCol = j;
                        break;
                    }
                }
            }
        }
        return totDistance;
    }
};