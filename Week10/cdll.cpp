#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node *prev;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(int value ,Node *&head, Node *&tail){
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        newNode->prev = newNode;
        newNode->next = newNode;
        head = newNode;
        tail=newNode;
    }else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        tail->next = head;
        head->prev = tail;
    }
}

void print(Node *&head, Node*&tail){
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);  
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(10, head , tail);
    insertAtHead(20, head, tail);
    insertAtHead(30, head, tail);
    print(head, tail);

    return 0;
}