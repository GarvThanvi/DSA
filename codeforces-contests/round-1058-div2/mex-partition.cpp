#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>multiset(n);
        bool zero_flag = false;
        for(int i=0; i<n; i++){
            cin >> multiset[i];
            if(multiset[i] == 0) zero_flag = true;
        }
        if(!zero_flag){
            cout << 0 << endl;
            continue;
        }

        sort(multiset.begin(), multiset.end());
        for(int i=0; i<n; i++){
            if(i == n-1){
                cout << multiset[n-1] + 1 << endl;
            }
            int diff = multiset[i+1] - multiset[i];
            if(!(diff == 1 || diff == 0)){
                cout << multiset[i] + 1 << endl;
                break;
            }
        }
    }
    return 0;
}