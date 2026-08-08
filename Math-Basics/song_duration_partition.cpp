/*
Problem: Luntik Loves Singing

Description:
Luntik has a collection of songs with different durations:

- a one-minute songs
- b two-minute songs
- c three-minute songs

He wants to divide all the songs into two concerts such that every song
is included in exactly one of the two concerts.

The duration of a concert is the sum of the durations of all songs
assigned to it.

The goal is to minimize the absolute difference between the total
durations of the two concerts.

Task:
Determine the minimum possible difference, in minutes, between the
durations of the two concerts.

Topic: Math Basics
Concepts: Arithmetic.
*/


#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int minimalDifference(int a, int b, int c) {
        return (a+c) % 2;
        
        
    }
};
