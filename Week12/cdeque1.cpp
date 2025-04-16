#include<iostream>
using namespace std;

class DeCircularQueue{
    public:
    int *arr;
    int n;
    int front;
    int rear;

    DeCircularQueue(int size){
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushFront(int val){
        if(front == -1 && rear == -1){
            front = rear = 0;
            arr[front] = val;
        }else if((front == 0 && rear == n-1) || (rear == front - 1)){
            cout << "Overflow" << endl;
        }else if(front == 0 && rear != n-1){
            front = n-1;
            arr[front] = val;
        }else{
            front--;
            arr[front] = val;
        }
    }

    void pushBack(int val){
        if((front == 0 && rear == n-1) || (rear == front - 1)){
            cout << "Overflow" << endl;
        }else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }else if(rear == n-1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }else{
            rear++;
            arr[rear] = val;
        }
    }

    void popFront(){
        if(front ==-1 && rear == -1){
            cout << "Underflow" << endl;
        }else if(front == rear){
            arr[front] = -1;
            front = rear = -1;
        }else if(front == n-1){
            arr[front] = -1;
            front = 0;
        }else{
            arr[front] = -1;
            front++;
        }
    }

    void popBack(){
        if(front ==-1 && rear == -1){
            cout << "Underflow" << endl;
        }else if(front == rear){
            arr[rear] = -1;
            front = rear = -1;
        }else if(rear == 0){
            arr[rear] = -1;
            rear = n-1;
        }else{
            arr[rear] = -1;
            rear--;
        }
    }

    void print(){
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }

};

int main(){
    DeCircularQueue d(5);
    d.pushFront(10);
    d.pushBack(50);
    d.pushBack(30);
    d.pushBack(20);
    d.popFront();
    d.pushFront(30);
    d.print();
    d.pushFront(40);
    d.print();
    d.pushBack(70);
    d.print();
    d.popFront();
    d.print();
    return 0;
}