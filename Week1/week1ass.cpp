// #include <iostream>
// using namespace std;
// int main() {
  // //Simple Interest
  // float p,r,t;
  // cin>>p>>r>>t;
  // float si = (p*r*t)/100;
  // cout<<si;

  // //factorial of a number
  // int n;
  // cin>>n;
  // int factorial = 1;

  // for(int i=n;i>=1;i--){
  //   factorial = factorial * i;
  // }
  // cout<<factorial;

  // // number is prime or not
  // int n;
  // cin >> n;

  // for (int i = 2; i < n; i++) {
  //   if(n%i == 0){
  //     cout<<"Not prime"<<endl;
  //     break;
  //   }
  // }

  // // max of three numbers
  // int a, b, c;
  // cin >> a >> b >> c;

  // if (a > b) {
  //   if (a > c) {
  //     cout << a;
  //   } else {
  //     cout << c;
  //   }
  // } else {
  //   if (b > c) {
  //     cout << b;
  //   } else {
  //     cout << c;
  //   }
  // }

  // //Square Pattern
  // int n;
  // cin>>n;

  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // // HollowSquare Pattern
  // int n;
  // cin >> n;

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // //Inverted Hollow Pyramid
  // int n;
  // cin>>n;

  // for(int i=0; i<n; i++){
  //   for(int j=0; j<(n-i); j++){
  //     if(i ==0 || i == n-1 || j==0 || j == n-i-1){
  //       cout<<"*";
  //     }else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // Hollow Full Pyramid
//   int n;
//   cin >> n;

//   for (int i = 0; i < n; i++) {
//     int k = 0;
//     for (int j = 0; j < ((2 * n) - 1); j++) {
//       if (j < n - i - 1) {
//         cout << " ";
//       } else if (k < 2 * i + 1) {
//         if (k == 0 || k == 2 * i || i == n - 1) {
//           cout << "*";
//         } else {
//           cout << " ";
//         }
//         k++;
//       } else {
//         cout << " ";
//       }
//     }
//     cout << endl;
//   }
//   return 0;
// }