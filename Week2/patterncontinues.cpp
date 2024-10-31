// #include <iostream>
// using namespace std;
  
// int main() {

  // This pattern is called Full pyramid
  //     *
  //    * *
  //   * * *
  //  * * * *
  // int n;
  // cin>>n;

  // for(int i=0; i<n;i++){
  //   //space
  //   for(int j=0;j<n-i-1;j++){
  //     cout << " ";
  //   }
  //  //stars
  //   for(int j=0; j<i+1; j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // //Inverted Full pyramid
  // int n;
  // cin>>n;
  // for(int i=0; i<n; i++){
  //   //spaces
  //   for(int j=0;j<i;j++){
  //     cout<<" ";
  //   }

  //   //stars
  //   for(int j=0;j<(n-i); j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // //Diamond
  // int num;
  // cin>>num;
  // int n = num/2;

  // for(int i=0; i<n;i++){
  //   //space
  //   for(int j=0;j<n-i-1;j++){
  //     cout << " ";
  //   }
  //  //stars
  //   for(int j=0; j<i+1; j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
  // for(int i=0; i<n; i++){
  //   //spaces
  //   for(int j=0;j<i;j++){
  //     cout<<" ";
  //   }

  //   //stars
  //   for(int j=0;j<(n-i); j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // // Hollow Pyramid
  // int n;
  // cin >> n;

  // for (int i = 0; i < n; i++) {
  //   //spaces
  //   for(int j=0; j<n-i-1;j++){
  //     cout<<" ";
  //   }
  //   //stars
  //   for(int j=0;j<i+1;j++){
  //     if(j==0 || j == i){
  //       cout<<"* ";
  //     }else{
  //       cout<<"  ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // // Inverted Follow pyramid
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++) {
  //   // spaces
  //   for (int j = 0; j < i; j++) {
  //     cout << " ";
  //   }

  //   // stars
  //   for (int j = 0; j < (n - i); j++) {
  //     if (j == 0 || j == (n - i - 1)) {
  //       cout << "* ";
  //     } else {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }

  // // Run code to find out what pattern this is
  // int num;
  // cin >> num;
  // int n = num / 2;

  // for (int i = 0; i < n; i++) {
  //   // inverted pyramid 1
  //   for (int j = 0; j < n - i; j++) {
  //     cout << "*";
  //   }
  //   // spaces
  //   for (int j = 0; j < (2 * i + 1); j++) {
  //     cout << " ";
  //   }
  //   // inverted pyramid 2
  //   for (int j = 0; j < n - i; j++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }
  // for (int i = 0; i < n; i++) {
  //   // half pyramid 1
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << "*";
  //   }

  //   // spaces
  //   for (int j = 0; j < (2 * n - 2 * i - 1); j++) {
  //     cout << " ";
  //   }

  //   // half pyramid 2
  //   for (int j = 0; j < i + 1; j++) {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // Pattern is this
  // 1
  // 2*2
  // 3*3*3
  // 4*4*4*4

  // int n;
  // cin >> n;

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < 2 * i + 1; j++) {
  //     if (j % 2 == 0) {
  //       cout << i + 1;
  //     } else {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }

  // 1
  // 1 - 2
  // 1 - - 3
  // 1 - - - 4

  /// hw

  // //A
  // //A B A
  // //A B C B A
  // //A B C D B C A
  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   char ch;
  //   for(int j=0; j<i+1;j++){
  //     int number = j + 1;
  //     ch = number + 'A' -1;
  //     cout<<ch;
  //   }

  //   for(char alphabet = ch; alphabet > 'A'; ){
  //     alphabet--;
  //     cout<<alphabet;
  //   }
  //   cout<<endl;
  // }

//   return 0;
// }