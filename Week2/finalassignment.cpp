#include <iostream>
#include <assert.h>
using namespace std;

int main()
{
    // //Numeric Hollow Half Pyramid
    // int n;
    // cin>>n;

    // for(int i=0; i<n;i++){
    //     for(int j=0; j<=i;j++){
    //         if(j == 0 || j == i || i==(n-1)){
    //             cout<<j+1;
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Numeric Hollow Inverted Hald Pyramid
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int count = i + 1;
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         if (i == 0 || i == n - 1 || j == 0 || j == n - i - 1)
    //         {
    //             cout << count++;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //numeric palindrome equilateral pyramid
    // int n;
    // cin>>n;
    // int k = n;

    // for(int i=0; i<n; i++){
    //     int c = 1;
    //     for(int j=0;j<k;j++){
    //         if(j < n-i-1){
    //             cout<<" ";
    //         }else if(j<=(n-1)){
    //             cout<<c;
    //             c++;
    //         }else if(j==n) {
    //             c = c-2;
    //             cout<<c;
    //         }else{
    //             cout<<--c;
    //         }
    //     }
    //     k++;
    //     cout<<endl;
    // }
            
    //solid half diamonjd
    // int n;
    // cin>>n;

    // for(int i=0; i<2*n-1;i++){
    //   int cond = i < n ? i : n - (i%n) - 2;
    //    for(int j=0; j<=cond; j++){
    //     cout<<"*";
    //    }
    //    cout<<endl;
    // }
    //FANCY PATTERN #1
    // int n;
    // cin>>n;
    // assert(n<=9);
    // for(int i=0; i<n; i++){
    //     int start_num_index = 8 -i;
    //     int num = i + 1;
    //     int count_num = num;
            
    //     for(int j = 0; j < 17; j++){
    //         if(j == start_num_index && count_num > 0){
    //             cout<<num;
    //             start_num_index+=2;
    //             count_num--;
    //         }else{
    //             cout<<"*";
    //         }
        
    //     }
    //      cout<<endl;  
    // }
    //FANCY PATTERN 2

    // int n;
    // cin>>n;
    // int c =1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<c++;
    //         if(j<i){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // int start = c-n;
    // for(int i=0; i<n; i++){
    //     int k = start;
    //     for(int j=0; j<n-i;j++){
    //         cout<<k;
    //         k++;
    //         if(j<n-i-1){
    //             cout<<"*";
    //         }
    //     }
    //     start = start - (n-i-1);
    //     cout<<endl;
    // }

    //FANCY PATTERN #3
    // int n;
    // cin>>n;
    //SIR'S APPROACH
    // for(int i=0; i<n; i++){
    //     int cond = i <= n/2 ? 2*i : 2*(n-i-1);
    //     for(int j=0; j<= cond; j++){
    //         if(j<=cond/2){
    //             cout<<j+1;
    //         }else{
    //             cout<<cond-j+1;
    //         }
    //     }
    //     cout << endl;
    // }
   //MY APPROACH 
    // int n;
    // cin>>n;
    // //upper part
    // for(int i=0 ; i<n; i++){
    //     int c = 1;
    //     for(int j=0; j<(2*i + 1); j++){
            
    //         if(j == 0 || j == 2*i){
    //             cout<<"*";
    //         }else{
    //            if(j<= ((2*i)/2)){
    //             cout<<c++;
    //            }else if(j == (2*i)/2 + 1){
    //             c = c-2;
    //             cout<<c;
    //            }else{
    //             cout<<--c;
    //            }
    //         }
    //     }
    //     cout<<endl;
    // }

    // //lower part
    // for(int i=0; i< n-1;i++){
    //     int c = 1;
    //     for(int j=0; j<= n-2*i; j++){
    //         if(j == 0 || j == n-2*i){
    //             cout<<"*";
    //         }else{
    //             if(j <= (n-2*i)/2){
    //                 cout<<c++;
    //             }else if(j == (n-2*i)/2 + 1){
    //                 c= c-2;
    //                 cout<<c;
    //             }else{
    //                 cout<<--c;
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }

    //floyds triangle
    // int n;
    // cin>>n;
    // int count = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<count++<<" ";
    //     }
    //     cout<<endl;
    // }

    //Pascals's Triangle

    // int n;
    // cin>>n;
    
    // for(int i=1; i<=n; i++){
    //     int c = 1;
    //     for(int j = 1 ; j<=i; j++){
    //        cout<<c<<" ";
    //        c = c * (i-j)/j;
    //     }
    //     cout<<endl;
    // }
    
    //butterfly pattern
    // int n;
    // cin>>n;

    // for(int i=0; i< 2*n; i++){
    //     int cond = i < n ? i : 2*n-i-1;
    //     int space_count = i<n ? 2 * (n-cond-1) : i - cond - 1;
    //     for(int j=0 ; j<2*n; j++){
    //         if(j <= cond){
    //             cout<<"*";
    //         } else if(space_count > 0){
    //             cout<< " ";
    //             space_count--;
    //         } else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

        
    return 0;
}