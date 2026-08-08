/*
Problem: Sum of Consecutive Products

Description:
Consider consecutive positive integers starting from 1.

These integers are divided into batches of increasing size:

- Batch 1 contains the next 1 integer, and its product is calculated.
- Batch 2 contains the next 2 consecutive integers, and their product
  is calculated.
- Batch 3 contains the next 3 consecutive integers, and their product
  is calculated.
- This process continues, with Batch i containing the next i consecutive
  integers after the previous batch.

The result of each batch is its product.

Task:
Calculate the sum of the first num batch products.

Return the result modulo 1000000007.

Topic: Math Basics
Concepts: Consecutive Numbers, Products, Modular Arithmetic
*/


#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    long long aggregateProductBlocks(int num) {
        long long total = 0;
        int n = 1;
        long long MOD = 1000000007;
        for(int i=1; i<=num; i++){
            long long product = 1;
            for(int j=1; j<=i; j++){
                product = (product*n)%MOD;
                n++;
            }
            total = (total+product)%MOD;
        }
        return total;
    }
};
