#include<iostream>
#include<queue>
using namespace std;

int main(){

    //MIN_HEAP --> minimum value has highest priority
    priority_queue<int, vector<int>, greater<int> > pq;

    pq.push(100);
    //100
    pq.push(20);
    //20 100
    pq.push(30);
    //20 30 100
    pq.push(60);
    //20 30 60 100

    cout<<pq.top();//smallest element
    

    
    //MAXHEAP
    // priority_queue<int> pq;
    // //max value --> highest priority

    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);

    // cout<<pq.top()<<endl; //40

    // //all functions similar to stack
    // //highest priority gets popped on calling .pop()


    return 0;
}