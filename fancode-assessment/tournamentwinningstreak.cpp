#include <bits/stdc++.h>
using namespace std;

long long solve(int i, int balance, string& s) {

    if (i == s.size()) {
        return balance == 0;
    }

    long long notTake = solve(i + 1, balance, s);

    long long take;

    if (s[i] == 'W') {
        take = solve(i + 1, balance + 1, s);
    }
    else if (s[i] == 'L') {
        take = solve(i + 1, balance - 2, s);
    }
    else { 
        take = solve(i + 1, balance, s);
    }

    return take + notTake;
}

int main() {

    string s;
    cin >> s;

    // Subtract 1 to remove the empty subsequence
    long long answer = solve(0, 0, s) - 1;

    cout << answer << endl;

    return 0;
}