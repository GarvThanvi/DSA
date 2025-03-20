#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // ctor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

Node *insertAtHead(int value, Node *&head, Node *&tail)
{
    //Linked List is empty
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node *insertAtTail(int value, Node *&head, Node *&tail){
    //Linked List is  empty
    if(head == NULL && tail == NULL){
        Node *newNode = new Node(value);
        head = newNode, tail = newNode;
    }else{
        Node *newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

int getLength(Node *head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    int length = getLength(head);
    if(position == 1) head = insertAtHead(value, head, tail);
    else if(position == length + 1) head = insertAtTail(value, head, tail);
    else{
        Node *temp = head;
        for(int i=0; i<position-2; i++){
            temp = temp->next;
        }
        Node *newNode = new Node(value);
        newNode->next = temp->next;
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

bool linearSearchLL(int target, Node* &head, Node* &tail){
    Node *temp = head;
    while(temp!=NULL){
        if(temp -> data == target) return true;
        else temp = temp->next;
    }
    return false;
}

void deleteFromLL(int position, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        cout << "No node delete possible" <<endl;
    }else if(head == tail){
        Node* temp = head;
        head = NULL, tail = NULL;
        delete temp;
    }else{
        //2 cases, 1st position and other for rest positions
        if(position == 1){
            Node *temp = head;
            head = temp->next;
            temp->next=NULL;
            delete temp;
        }else{
            Node* temp = head;
            for(int i=0; i<position-2; i++){
                temp = temp->next;
            }
            //we can also use 3pointers
            Node *nodeToDel = temp->next;
            temp->next = nodeToDel->next;
            nodeToDel->next=NULL;
            delete nodeToDel; 
        }
    }
}

void deleteFromLLbyvalue(int value, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        cout << "No node to delete LL is empty" << endl;
    }else if(head == tail){
        if(head->data == value){
            Node* temp=head;
            head = NULL, tail = NULL;
            delete temp;
        }else{
            cout << "No node has data that matches value" << endl;
        }
    }else{
        Node *temp = head;
        while(temp->next->data != value){
            temp = temp->next;
        }
        Node* nodeToDel = temp->next;
        temp->next = nodeToDel->next;
        nodeToDel->next = NULL;
        delete nodeToDel;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    head = insertAtHead(10, head, tail);
    head = insertAtHead(20, head, tail);
    head = insertAtHead(30, head, tail);

    head = insertAtTail(40, head, tail);
    head = insertAtTail(50, head, tail);
    head = insertAtTail(60, head, tail);

    insertAtPosition(3, 70, head, tail);

    // if(linearSearchLL(10, head, tail)){
    //     cout << "Yes found";
    // }else cout << "No found";

    deleteFromLL(6, head, tail);
    deleteFromLLbyvalue(20, head, tail);

    print(head);
    return 0;
}