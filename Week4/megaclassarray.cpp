#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findComplement(vector<int> binary){
    int n = binary.size();
    vector<int> twosComp(n+1, 0);

    //flipping the digits
    for(int i=n-1; i>=0; i--) twosComp[i+1] = binary[i] == 0 ? 1 : 0;
    
    //add 1
    int m = twosComp.size();
    int carry = 1;
    for(int i=m-1; i>=0; i--){
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;
    }

    if(carry) twosComp[0] = carry;
    return twosComp;

}

int main() {
    vector<int> binary = {0,0,0,1,1,1,1,0};
    vector<int> ans = findComplement(binary);

    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}