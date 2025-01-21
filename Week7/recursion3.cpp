#include<iostream>
#include<string>
using namespace std;

void printSubsequences(string str, int i, string output){
    if(i == str.length()){
        cout << output << endl;
        return;
    }
    char ch = str[i];
    printSubsequences(str, i+1, output+ch);
    printSubsequences(str, i+1, output);
}

int main(){
    string str = "abc";
    string output = "";
    int index = 0;
    printSubsequences(str, index, output);
    return 0;
}