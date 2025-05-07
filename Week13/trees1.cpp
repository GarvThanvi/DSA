#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    Node *createTree()
    {
        cout << "Enter the value for node " << endl;
        int value;
        cin >> value;

        if (value == -1)
        {
            return NULL;
        }
        else
        {
            Node *root = new Node(value);
            cout << "adding left child for " << value << endl;
            root->left = createTree();
            cout << "adding right child for" << value << endl;
            root->right = createTree();
            return root;
        }
    }
};

void preOrderTraversal(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << endl;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
        return;
    inOrderTraversal(root->left);
    cout << root->data << endl;
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
        return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << endl;
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout << endl;
            if(!q.empty()) q.push(NULL);
            
        }
        else
        {
         
            cout << front->data << " ";
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{
    Node *root;
    root = root->createTree();
    levelOrderTraversal(root);
}