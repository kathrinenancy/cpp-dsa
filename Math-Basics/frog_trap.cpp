/*
Problem: Frog Traps

Description:
Alice and Bob are watching n frogs numbered from 1 to n. Initially,
all frogs are at coordinate 0.

Each frog i has a hop length of a[i]. Every second, frog i moves
forward by exactly a[i] units.

Before the frogs start hopping, Alice and Bob can place exactly one
trap at a coordinate to catch every frog that passes through that
coordinate.

However, the trap can only be placed at one of the first n positive
points, meaning its coordinate must be between 1 and n. The trap
cannot be placed at coordinate 0.

A frog with hop length a[i] will pass through a coordinate x if x is
a multiple of a[i].

Task:
Find the maximum number of frogs that can be caught using one trap.

Topic: Math Basics
Concepts: Maximum, Frequency Counting
*/


#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    long long maxFrogsCaught(int n, vector<int>& arr) {
        vector<long long> cnt(n + 1, 0);
        vector<long long> mx(n + 1, 0);
        for (int k : arr) {
            if (k <= n) {
                cnt[k]++;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                mx[j] += cnt[i];
            }
        }
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = max(ans, mx[i]);
        }
        return ans;
    }
};
