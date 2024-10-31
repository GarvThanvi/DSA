// #include <iostream>
// using namespace std;

// int main() {
  // // Numeric Hollow Inverted Half Pyramid
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   int count = i + 1;
  //   for (int j = 0; j < (n - i); j++) {
  //     if (i == 0 || i == n - 1 || i == n - 2 || j == 0 || j == n - i - 1) {
  //       cout << count;
  //     } else {
  //       cout << " ";
  //     }
  //     count++;
  //   }
  //   cout << endl;
  // }

  // //Numeric Palindrome  Equilateral Pyramid

  // int n;
  // cin>>n;

  // for(int i=0;i<n;i++){
  //   //spaces
  //   for(int j=0;j<n-i;j++){
  //     cout<<" ";
  //   }

  //   for(int j=0;j<i+1;j++){
  //     cout<<j+1;
  //   }
  //   int count = i;
  //   for(int j=0;j<i;j++){
  //     cout<<count--;
  //   }

  //   cout<<endl;
  // }

  // //hw3
  // int n;
  // cin>>n;

  // for(int i=0;i<n;i++){
  //   //stars
  //   for(int j=0;j<(2*n-i-2);j++){
  //     cout<<"*";
  //   }

  //   //pyramid
  //   for(int j=0;j<(2*i+1);j++){
  //     if(j%2 == 0){
  //       cout<<i+1;
  //     }else{
  //       cout<<"*";
  //     }
  //   }

  //   //stars
  //   for(int j=0;j<(2*n-i-2);j++){
  //     cout<<"*";
  //   }

  //   cout<<endl;
  // }

  // // solid half diamond
  // int num;
  // cin >> num;
  // int n = 2 * num - 1;

  // for (int i = 0; i < n; i++) {
  //   if (i <= (n / 2)) {
  //     for (int j = 0; j < i + 1; j++) {
  //       cout << "*";
  //     }
  //   } else {
  //     for (int j = 0; j < n - i; j++) {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }

  // //flyod's traingle
  // int n;
  // cin>>n;
  // int count = 1;
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<i+1;j++){
  //     cout<<count++<<" ";
  //   }
  //   cout<<endl;
  // }

  // // Butterfly Pattern
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   // stars
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << "*";
  //   }
  //   // spaces
  //   for (int j = 0; j < (2 * n - 2 * i - 2); j++) {
  //     cout << " ";
  //   }
  //   // stars
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }
  // for (int i = 0; i < n; i++) {
  //   // stars
  //   for (int j = 0; j < n - i; j++) {
  //     cout << "*";
  //   }
  //   // spaces
  //   for (int j = 0; j < 2 * i; j++) {
  //     cout << " ";
  //   }
  //   // stars
  //   for (int j = 0; j < n - i; j++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

//   return 0;
// }