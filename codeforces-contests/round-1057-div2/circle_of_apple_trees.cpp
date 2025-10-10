#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<int, bool>visited;
        for(int i=0; i<n; i++){
            int beauty;
            cin >> beauty;
            visited[beauty] = 1;
        }
        cout << visited.size() << endl;
    }
    return 0;
}