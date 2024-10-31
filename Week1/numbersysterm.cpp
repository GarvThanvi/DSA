// #include <cmath>
// #include <iostream>
// using namespace std;
// // DECIMAL TO BINARY
// int decimalToBinary1(int n) {
//   // divison method
//   int i = 0;
//   int binaryno = 0;

//   while (n > 0) {
//     int bit = n % 2;
//     binaryno = bit * pow(10, i++) + binaryno;
//     n = n / 2;
//   }
//   return binaryno;
// }

// int decimalToBinary2(int n) {
//   // bitwise method
//   int i = 0;
//   int binaryno = 0;
//   while (n > 0) {
//     int bit = n & 1;
//     binaryno = bit * pow(10, i++) + binaryno;
//     n = n >> 1;
//   }
//   return binaryno;
// }
// // BINARY TO DECIMAL
// int binarytoDecimal(int n) {
//   int decimal = 0;
//   int i = 0;
//   while (n) {
//     int bit = n % 10;
//     decimal = decimal + bit * pow(2, i++);
//     n = n / 10;
//   }

//   return decimal;
// }

// int main() {
//   // int a;
//   // cin >> a;
//   // int binaryno1 = decimalToBinary1(a);
//   // cout << binaryno1 << endl;

//   // int binaryno2 = decimalToBinary2(a);
//   // cout<<binaryno2<<endl;

//   int binaryno;
//   cin >> binaryno;
//   cout << binarytoDecimal(binaryno) << endl;

//   return 0;
// }