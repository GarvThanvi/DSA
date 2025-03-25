#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void solve(Node* head, int&carry){
    if(!head) return;
    solve(head->next, carry);

    int sum = head->data + carry;
    head->data = sum%10;
    carry = sum/10;
}

Node* add1(Node* head, int&carry){
    solve(head, carry);
    if(carry){
        Node* newHead = new Node(carry);
        newHead->next = head;
        head = newHead;
    }
    return head;
}

int main(){
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);
    print(head);
    int carry = 1;
    head = add1(head, carry);
    print(head);
    return 0;
}