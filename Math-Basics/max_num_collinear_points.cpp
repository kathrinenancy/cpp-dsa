#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int maximumNumberofCollinearPoints(const vector<vector<int>>& arrPoints) {
        int n = (int)arrPoints.size();
        if (n <= 2) {
            return n;
        }

        int maxCount = 2;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int count = 2;
                long long x1 = arrPoints[j][0] - arrPoints[i][0];
                long long y1 = arrPoints[j][1] - arrPoints[i][1];

                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) {
                        continue;
                    }
                    long long x2 = arrPoints[k][0] - arrPoints[i][0];
                    long long y2 = arrPoints[k][1] - arrPoints[i][1];
                    if (y1 * x2 == y2 * x1) {
                        count++;
                    }
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }

};