#include<iostream>
#include<cmath>
using namespace std;

float areaOfCircle(float r) {
  float area = 3.14 * r * r;
  return area;
}

int factorial(int num) {
  int ans = 1;
  for (int i = num; i > 0; i--) {
    ans = ans * i;
  }
  return ans;
}

void printAllPrime(int num) {

  for (int i = 2; i <= num; i++) {
    bool flag = 1;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      cout << i << " ";
    }
  }
}

void digitOfInt(int num) {
  int n = num;
  int sum = 0;
  int digits = 0;
  while (n > 10) {
    digits++;
    n = n / 10;
  }

  while (num > 0) {
    int digit = num % 10;
    sum = sum + digit * pow(10, digits);
    digits--;
    num = num / 10;
  }

  while (sum > 0) {
    int digit = sum % 10;
    cout << digit << " ";
    sum /= 10;
  }
}

void returnNumber(int arr[], int n) {
  int multiplier = n - 1;
  int num = 0;
  for (int i = 0; i < n; i++) {
    num = num + (arr[i] * pow(10, multiplier));
    multiplier--;
  }
  cout << num;
}

void decimalToBinary(int n) {
  int i = 0;
  int num = 0;

  while (n > 0) {
    int bit = n % 2;
    num = num + (bit * pow(10, i++));
    n = n / 2;
  }
  cout << num;
}

int countSetBits(int n) {
  int count = 0;
  while (n != 0) {
    if (n & 1) {
      count++;
    }
    n = n >> 1;
  }
  return count;
}

bool oddOrEven(int n){
  if(n & 1){
    return false;
  }else{
    return true;
  }
}

int main() {
  // //remove area of circle
  // float area = areaOfCircle(2);
  // cout<<area;

  // Factorial of a number
  //  int fact = factorial(5);
  //  cout<<fact;

  // // Print all prime nos 1 to N
  // printAllPrime(50);

  // // digits of a integer
  // digitOfInt(1234);

  // //return number using digits
  // int n;
  // cin >> n;
  // int arr[n];
  // for (int i = 0; i < n; i++) {
  //   cin >> arr[i];
  // }
  // returnNumber(arr, n);

  // //decimal to binary
  // int n;
  // cin>>n;
  // decimalToBinary(n);

  // //count all set bits
  // int n;
  // cin>>n;
  // int answer = countSetBits(n);
  // cout<<answer;

  // even or odd using bitwise
  int n;
  cin >> n;
  if (oddOrEven(n)) {
    cout << n << " is even";
  } else {
    cout << n << " is odd";
  }

  return 0;
}