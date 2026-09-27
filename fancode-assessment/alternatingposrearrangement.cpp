#include <bits/stdc++.h>
using namespace std;

/*
Question:
Given an array, rearrange it such that all elements
at even indices come first, followed by all elements
at odd indices.

The relative ordering within the even and odd indices
must remain unchanged.

Example:
Input:  [10, 20, 30, 40, 50]
Output: [10, 30, 50, 20, 40]
O(1) space solution is very complex
*/

int main() {

    vector<int> arr = {10, 20, 30, 40, 50};

    vector<int> result;

    for (int i = 0; i < arr.size(); i += 2) {
        result.push_back(arr[i]);
    }

    for (int i = 1; i < arr.size(); i += 2) {
        result.push_back(arr[i]);
    }

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}