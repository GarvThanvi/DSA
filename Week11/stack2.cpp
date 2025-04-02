#include<iostream>
#include<stack>
#include<climits>
using namespace std;

void printMiddle(stack<int>&s, int count){
    if(count == 0){
        cout << s.top() << endl;
        return;
    }
    int topElement = s.top();
    count--;
    s.pop();
    printMiddle(s, count);
    s.push(topElement);
}

bool checkSorted(stack<int>&s, int element1){
    if(s.empty()){
        return true;
    }

    int element2 = s.top();
    s.pop();
    if(element2 < element1){
        bool aagekaAns = checkSorted(s, element2);
        s.push(element2);
        return aagekaAns;
    }else{
        s.push(element2);
        return false;
    }
}

void insertAtBottom(stack<int>&s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int popped = s.top();
    s.pop();
    insertAtBottom(s, value);
    //backtrack
    s.push(popped);
}

void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }

    int topE = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, topE);
}

void print(stack<int> &s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

void sortedInsert(stack<int>&s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    if(!s.empty() && s.top() < val){
        s.push(val);
        return;
    }

    int topE = s.top();
    s.pop();
    sortedInsert(s,val);
    s.push(topE);

}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int val = 23;
    // int count = s.size()/2;
    // printMiddle(s, count);

    // int element1 = INT_MAX;
    // if(checkSorted(s, element1)) cout << " Yes";
    // else cout << "No";
    
    // reverseStack(s);
    // print(s);
     
    sortedInsert(s, 23);
    print(s);

    return 0;
}