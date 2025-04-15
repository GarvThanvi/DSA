#include<iostream>
using namespace std;

class Deque{
    private:
    int *arr;
    int n;
    int front;
    int rear;
    public:
    Deque(int size){
        arr = new int[size];
        n = size;
        front = -1;
        rear = -1;
    }

    void pushFront(int val){
        if(front == -1 && rear == -1){
            front = rear = 0;
            arr[front] = val;
        }else if(front == 0){
            cout << "Overflow" << endl;
        }else{
            front--;
            arr[front] = val;
        }
    }

    void pushRear(int val){
        if(rear == n - 1){
            cout << "Overflow" << endl;
        }else if(rear == -1 && front == -1){
            front = rear = 0;
            arr[rear] = val;
        }else{
            rear++;
            arr[rear] = val;
        }
    }

    void popFront(){
        if(front == -1 && rear == -1){
            cout << "Underflow" << endl;
        }else if(front == rear){
            arr[front] = -1;
            front = rear = -1;
        }else{
            arr[front] = -1;
            front++;
        }
    }

    void popRear(){
        if(front == -1 && rear == -1){
            cout << "Underflow" << endl;
        }else if(front == rear){
            arr[rear] = -1;
            front = rear = -1;
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
    Deque d(5);
    d.pushFront(10);
    d.pushRear(50);
    d.pushRear(30);
    d.pushRear(20);
    d.popFront();
    d.pushFront(30);
    d.pushFront(40);
    d.print();
    d.pushRear(70);
    d.print();
    return 0;
}