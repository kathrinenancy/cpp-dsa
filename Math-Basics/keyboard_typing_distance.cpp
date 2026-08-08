/*
Problem: Keyboard Typing Distance

Description:
You are given a custom keyboard layout arranged in a grid. Each key has
a row and column position.

The task is to calculate the total distance travelled by a single finger
while typing a given string.

The finger starts at the first key of the string and moves from one key
to the next.

For two keys located at (r1, c1) and (r2, c2), the distance between them
is calculated using:

    |r1 - r2| + |c1 - c2|

The total distance is the sum of the distances travelled between all
consecutive characters while typing the given string.

Topic: Math Basics
Concepts: Coordinates, Absolute Value, Grid, Distance
*/


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
