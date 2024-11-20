#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);

    second.push(40);
    second.push(40);

    first.swap(second);
    cout << first.front() ;

    //cant make iterator


    // queue<int> q;
    
    // //inserting elements
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);

    // //size
    // cout<<q.size()<<endl;

    // q.pop();
    // q.pop();
    // //20,30,40

    // cout<<q.size()<<endl;

    // //q.empty() function returns boolean value

    // cout<<"Front "<<q.front();
    // cout<<endl<<"Back "<<q.back();





    return 0;
}