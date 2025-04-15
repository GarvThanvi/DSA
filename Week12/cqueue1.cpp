#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int *arr;
    int n;
    int front;
    int rear;

    CircularQueue(int size){
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val){
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

    void pop(){
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

    int getFront(){
        if(front == -1 && rear == -1) return -1;
        else return arr[front]; 
    }

    int getSize(){
        if(front == -1 && rear == -1) return -1;
        else if(rear >= front){
            return rear - front + 1;
        }else{
            return n - front + rear + 1;
        }
    }

    bool isEmpty(){
        if(rear == -1 && front == -1) return false;
        return true;
    }

    void print(){
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }
};

int main(){
    CircularQueue cq(5);
    cq.push(5);
    cq.push(10);
    cq.pop();
    cq.push(15);
    cq.push(110);
    cq.push(25);
    cq.push(120);
    cq.print();
    return 0;
}