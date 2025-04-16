#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>& q){
    //METHOD 1 STACK
    // stack<int> s;
    // while(!q.empty()){
    //     s.push(q.front());
    //     q.pop();
    // }

    // while(!s.empty()){
    //     q.push(s.top());
    //     s.pop();
    // }

    //METHOD 2 REC
    if(q.empty()){
        return;
    }

    int element = q.front();
    q.pop();
    reverseQueue(q);
    q.push(element);
}

void reverseInKGroups(queue<int> &q, int k, int count){
    if(count >= k){
        stack<int> st;
        for(int i=0; i<k; i++){
            st.push(q.front());
            q.pop();
        }
        for(int i=0; i<k; i++){
            q.push(st.top());
            st.pop();
        }
        reverseInKGroups(q, k, count-k);
    }else{
        for(int i=0; i<count; i++){
            q.push(q.front());
            q.pop();
        }
    }
}



int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);
    int count = q.size();

    // reverseQueue(q);
    reverseInKGroups(q, 3, count);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}