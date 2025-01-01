#include <iostream>
using namespace std;
//Brute Force
int main() {
    const int SIZE = 1000000;
    int arr[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = i * 2; 
    }
    
    int target = 123456;
    int index = -1;
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
} 