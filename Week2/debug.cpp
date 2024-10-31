// #include <iostream>
// #include<climits>
// using namespace std;

// // // check if number comes in fibonacci series
// // bool checkMember(int n) {
// //   int f1 = 1, f2 = 1;
// //   if (n == 0 && n == 1) {
// //     return true;
// //   } else {
// //     while (1) {
// //       int temp = f1 + f2;
// //       f1 = f2;
// //       f2 = temp;
// //       if (temp == n) {
// //         return false;
// //       } else if (temp > n) {
// //         return true;
// //       }
// //     }
// //   }
// // }

// int main() {
//   // // area of rectangle
//   // double width, height;
//   // cin >> width >> height;
//   // double area = width * height;
//   // cout << area << endl;

//   // // convert binary to decimal
//   // int n, sum = 0, factor = 1;
//   // cin >> n;
//   // while (n != 0) {
//   //   int digit = n % 10;
//   //   sum = sum + digit * factor;
//   //   factor = 2 * factor;
//   //   n = n / 10;
//   // }
//   // cout << sum;

//   // // print all prime numbers that lie in range 2 to N

//   // int n, flag = 1;
//   // cin >> n;
//   // for (int i = 2; i <= n; i++) {
//   //   flag = 1;
//   //   for (int j = 2; j <= i / 2; j++) {
//   //     if (i % j == 0) {
//   //       flag = 0;
//   //     }
//   //   }
//   //   if (flag == 1) {
//   //     cout << i << endl;
//   //   }
//   // }

//   // // print reverse of a number
//   // int n, a = 0;
//   // cin >> n;
//   // int z = n, digits = 0;
//   // while (z != 0) {
//   //   z = z / 10;
//   //   digits++;
//   // }
//   // while (n != 0) {
//   //   int k = n % 10, digits = digits - 1;
//   //   while (z--) {
//   //     k = k * 10;
//   //   }
//   //   a = a + k;
//   //   digits--;
//   //   n = n / 10;
//   // }
//   // cout << a;

  
//   // if (checkMember(13)) {
//   //   cout << "yes";
//   // } else {
//   //   cout << "no";
//   // }

//   //second largest
//   // int n;
//   // cin>>n;
//   // int arr[n];
//   // for(int i=0;i<n;i++){
//   //     cin>>arr[i];
//   // }
//   // int max = INT_MIN;
//   // for(int i=0;i<n;i++){
//   //   if(max<arr[i]){
//   //     max=arr[i];
//   //   }
//   //  }
//   //  int second = INT_MIN;
//   //  for(int i=0;i<n;i++){
//   //    if(max>arr[i] && arr[i]>second){
//   //      second = arr[i];
//   //    }
//   //  }
//   //  cout<<second;

//   //pattern
//   int i,j,n;
//   cin>>n;
//   for(i=0;i<n;i++){
//       for(j=i;j<n;j++){
//           cout<<(n-i);
//       }
//       cout<<endl;
//   }

//   return 0;
// }