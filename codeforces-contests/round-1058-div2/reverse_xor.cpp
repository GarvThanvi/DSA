#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int number_of_1s = 0;
        while(n != 0){
            if(n & 1) number_of_1s++;
            n = n >> 1;
        }
        if(number_of_1s % 2 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}