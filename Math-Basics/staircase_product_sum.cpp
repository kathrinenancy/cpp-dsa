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