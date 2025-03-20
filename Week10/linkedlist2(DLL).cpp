#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    
    Node(int value){
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(int value, Node *&head, Node* &tail){
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode, tail = newNode;
    }else{
        Node *newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(int value, Node* &head, Node* &tail){
    if(head == NULL && head == NULL){
        Node *newNode = new Node(value);
        head = newNode, tail = newNode;
    }else{
        Node* newNode = new Node(value);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    int len = getLength(head);
    if(position == 1) insertAtHead(value, head, tail);
    else if(position == len + 1) insertAtTail(value, head ,tail);
    else{
        Node *newNode = new Node(value);
        Node *temp = head;
        for(int i=0; i<position-2; i++){
            temp = temp->next;
        }
        temp->next->prev = newNode;  //you can also create another Node *forward = temp->next
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void printReverse(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }
}

bool linearSearchDLL(Node* head, int target){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target) return true;
        temp = temp->next;
    }
    return false;
}

void deleteFromPosition(int position, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        cout << "no nodes to delete" << endl;
        return;
    }else if(head == tail){
        Node* temp = head;
        head = NULL, tail = NULL;
        delete temp;
    }else if(position == 1){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }else if(position == getLength(head)){
        Node* temp = tail;
        tail = temp->prev;
        temp->prev = NULL;
        tail->next=NULL; 
        delete temp;
    }
    else{
        Node* temp = head;
        for(int i=0; i<position-2; i++){
            temp = temp->next;
        }
        Node* curr = temp->next;
        Node* forward = curr->next;
        temp->next = forward; 
        forward->prev = temp;
        curr->prev = NULL;
        curr->next = NULL;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);
    insertAtHead(30, head, tail);
    insertAtTail(40, head, tail);
    insertAtTail(50, head, tail);
    insertAtPosition(4, 60, head, tail);
    print(head);
    cout << endl;
    printReverse(tail);

    cout <<endl;
    if(linearSearchDLL(head, 80)){
        cout << "Yes";
    }else cout <<"No";
    cout << endl;

    deleteFromPosition(6, head, tail);
    print(head);
    return 0;
}