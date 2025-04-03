#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
 
void solveNextSmaller(stack<int> &s, vector<int>& v, vector<int>& ans){
    int n = v.size();
    for(int i=n-1; i>=0; i--){
        int element = v[i];
        while(s.top() > element){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(v[i]);
    }
}

void solvePrevSmaller(stack<int> &s, vector<int>& v, vector<int>& ans){
    int n = v.size();
    for(int i=0; i<n; i++){
        int element = v[i];
        while(s.top() > element){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(v[i]);
    }
}

int main(){
    stack<int> s;
    s.push(-1);

    vector<int> v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3); 

    vector<int> ans;
    solvePrevSmaller(s, v, ans);
    // reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout << ans[i];
    }
    return 0;
}