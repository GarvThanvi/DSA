#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int fastExponentiation(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}

vector<bool> Sieve(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (sieve[i] == true)
        {
            int j = i * i;
            while (j < n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

void segmentedSieve(int L, int R) {
    vector<int> basePrimes;
    int limit = sqrt(R) + 1;
    vector<bool> sieve = Sieve(limit);
    for (int i = 2; i <= limit; i++) {
        if (sieve[i]) {
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R - L + 1, true); 
    if (L == 1 || L == 0) {
        segSieve[L] = false; 
    }
    for (int i = 0; i < basePrimes.size(); i++) {
        int firstMultiple = (L / basePrimes[i]) * basePrimes[i];
        if (firstMultiple < L)
            firstMultiple += basePrimes[i];

        for (int j = max(firstMultiple, basePrimes[i] * basePrimes[i]); j <= R; j += basePrimes[i]) {
            segSieve[j - L] = false;
        }
    }

    for (int i = 0; i < segSieve.size(); i++) {
        if (segSieve[i]) {
            cout << (i + L) << " ";
        }
    }
    cout << endl;
}

int main() {
    int L = 110, R = 130;
    segmentedSieve(L, R);
    return 0;
}