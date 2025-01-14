#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1) return n;

    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int getFactorial(int n){
    if(n == 0){
        return 1;
    }

    int ans = n * getFactorial(n-1);
    return ans;
}

void printCounting(int n){
    if(n == 1){
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    printCounting(n-1); 
}

int SumTillN(int n){
    if(n == 1) return 1;
    int ans = n;
    ans += SumTillN(n-1);
    return ans;
}

int main() {
    // printCounting(5);
    // int n;
    // cin >> n;
    // int ans = getFactorial(n);
    // cout << ans << endl;
    // int fibonacci = fib(9);
    // cout << fibonacci;

    int sum = SumTillN(10);
    cout << sum;
    return 0;
}