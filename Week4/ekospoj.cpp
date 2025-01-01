#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<long long int> &arr, long long int m, long long int mid){
    long long int sum = 0;
    for(long long int i=0; i<arr.size(); i++){
        if(arr[i] > mid){
            sum += (arr[i] - mid);
        }
    }
    return sum >= m;
}

int main() {
    long long int n = 5;
    long long int m = 20;
    vector<long long int> arr = {4, 42, 40, 26, 46};
    sort(arr.begin(), arr.end());
    long long int start = 0;
    long long int end = arr[n-1];

    long long int ans = -1;
    while(start <= end){
        long long int mid = start + (end - start)/2;
        if(isPossible(arr, m, mid)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    cout << ans << endl;
    
    return 0;
}
