#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
     }



};

Node* buildBST(int val, Node* &root){
    if(root == NULL){
        root = new Node(val);
        return root;
    }else{
        if(val < root->data){
            root->left = buildBST(val, root->left);
        }else{
            root->right = buildBST(val, root->right);
        }
    }
    return root;
}

Node* createTree(){
    cout << "Enter value for node" << endl;
    int val;
    cin >> val;

    Node* root = NULL;

    while(val != -1){
        root = buildBST(val, root);
        cout << "Enter value for node" << endl;
        cin >> val;
    }
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        auto front = q.front();
        q.pop();
        cout << front->data << " ";

        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }
}

void inOrderTraversal(Node* root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root){
    if(root == NULL) return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

//MAX/MIN OF BST
int getMin(Node* root){
    if(root == NULL){
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }
    return root->data;
}

int getMax(Node* root){
    if(root == NULL){
        return -1;
    }
    while(root->right != NULL){
        root = root->right;
    }
    return root->data;
}

bool searchBST(Node* root, int target){
    if(root == NULL) return false;

    if(root->data == target){
        return true;
    }else{
        if(target < root->data){
            bool leftAns = searchBST(root->left, target);
            if(leftAns == true) return true;
        }else{
            bool rightAns = searchBST(root->right, target);
            if(rightAns == true) return true;
        }
    }
    return false;
}

int main(){
    Node* root = createTree();
    levelOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root); //always in sorted order of value of nodes
    cout << endl;
    preOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    cout << endl;
    cout << getMin(root) << endl;
    cout << getMax(root) << endl;

    cout <<  searchBST(root, 75);
    return 0;
}