#include<iostream>
using namespace std;

//Dividing without using /
int getQuotient(int dividend, int divisor){
    int s = 0;
    int e = dividend;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)>>1;

        if((divisor * mid) == dividend){
            return mid;
        }
        if((divisor * mid) < dividend){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return ans;

} 

int main(){
    int dividend = -10;
    int divisor = -2;

    int ans = getQuotient(abs(dividend), abs(divisor));

    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
        cout << -ans;
    }else{
        cout << ans;
    }

    return 0;
}