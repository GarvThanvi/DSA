#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    deque<int> dq;

    //insertion from both ends and also removal
    dq.push_front(20);
    dq.push_front(40);
    dq.push_front(60);
    dq.push_front(80);
    dq.push_back(30);

    dq.pop_front(); 
    //u can use .front() and .back() to point at first and last element in the deque

    cout<<dq.size()<<endl;

    deque<int>::iterator it = dq.begin();
    while(it != dq.end()){
        cout << *it << " ";
        it++;
    }
    
    cout<<endl<<dq[3];

    //most functions are same for dequeue and vectors/
    //also try insert , erase, swap, clear





    return 0;
}