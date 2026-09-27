/*
Question:
You are given three types of items: A, B and C.
You need to form groups of exactly 3 items.

A valid group is either:
1. All three items are identical (AAA, BBB, or CCC), OR
2. All three items are different (ABC).

Given the number of A, B and C items, find the maximum
number of valid groups that can be formed.

Example:
A = 5, B = 4, C = 3

Answer = 4
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    int A = 5;
    int B = 4;
    int C = 3;

    int ans = 0;

    int limit = min({A, B, C});

    for (int abc = 0; abc <= limit; abc++) {
        int remA = A - abc;
        int remB = B - abc;
        int remC = C - abc;
        int groups = abc
                   + remA / 3
                   + remB / 3
                   + remC / 3;

        ans = max(ans, groups);
    }

    cout << "Maximum groups = " << ans << endl;

    return 0;
}