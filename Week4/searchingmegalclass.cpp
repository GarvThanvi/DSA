#include<iostream>
using namespace std;

double SqrtPrecision(int n){
    double ans = 0;
    double s = 0;
    double e = n;
    while(s + 0.001 < e){
       double mid = (s + e)/2;
       if(mid * mid <= n){
           ans = mid;
           s = mid;
       }else{
        e = mid;
       }
    }
    return ans;
    

}

int main() {
    double sqrt = SqrtPrecision(63);
    cout << sqrt;
    return 0;
}