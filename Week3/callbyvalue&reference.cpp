#include<iostream>
using namespace std;

// //CALL BY VALUE
// int incrementBy1(int n){
//     n = n + 1;
//     return n;
// }

//CALL BY REFERENCE
void incrementBy1(int &n){
    n = n + 1;
}

int main(){
    // //REFERENCE VARIABLE
    // int n = 5;
    // int &k = n;
    // cout<<n<<endl;
    // cout<<k<<endl;

    // k++;
    // cout<<n<<endl;
    // cout<<k<<endl;

    // //CALL BY VALUE
    // int n;
    // cin>>n;
    // n = incrementBy1(n);

    // cout<<n;

    //CALL BY REFERENCE
    int n;
    cin>>n;
    incrementBy1(n);

    cout<<n;


    return 0;
}