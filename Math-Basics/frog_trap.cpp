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