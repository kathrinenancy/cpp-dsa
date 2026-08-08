/*
Problem: Minimum Cost Grid Navigation

Description:
A robot navigates through a rectangular grid of size rows × cols.
The cells are indexed from the top-left corner as (0, 0) to
(rows - 1, cols - 1).

Entering cell (i, j) costs:

    (i + 1) * (j + 1)

The robot starts at cell (0, 0) and pays the cost of entering it.

Movement follows an alternating rule:

- On odd-numbered moves, the robot can move only right or down.
- On even-numbered moves, the robot can move only left or up.

The robot must reach the cell (rows - 1, cols - 1).

Task:
Find the minimum possible total cost required to reach the destination
while following the movement rules.

If the destination cannot be reached, return -1.

Topic: Math Basics / Grid
Concepts: Grid Traversal.
*/


#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int computeAlternatingRouteCost(int rows, int cols) {
        if(rows == 1 && cols == 1) return 1;
        if(rows == 1 && cols == 2) return 3;
        if(rows == 2 && cols == 1) return 3;
        else return -1;
    }
};
