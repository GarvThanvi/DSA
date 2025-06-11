#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Class with functions to be implemented
class Solution {
public:
        TreeNode* inorderPredecessor(TreeNode* root, TreeNode* p) {
        TreeNode* pred= nullptr;
        TreeNode* curr = root;

        while(curr){
            if(p->val > curr->val){
                pred = curr;
                curr = curr->right;
            }else{
                curr = curr->left;
            }
        }
        return pred;;
    }

    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* curr = root;
        TreeNode* succ = nullptr;
        while(curr){
            if(curr->val > p->val){
                succ = curr;
                curr = curr->left;
            }else{
                curr = curr->right;
            }
        }
        return succ;
    }
};

// Helper function to insert a node into the BST
TreeNode* insertBST(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) root->left = insertBST(root->left, val);
    else root->right = insertBST(root->right, val);
    return root;
}

// Helper function to find a node in the BST
TreeNode* findNode(TreeNode* root, int val) {
    if (!root || root->val == val) return root;
    if (val < root->val) return findNode(root->left, val);
    return findNode(root->right, val);
}

// Example usage
int main() {
    TreeNode* root = nullptr;
    int values[] = {20, 10, 5, 15, 30, 25, 35};

    for (int val : values) {
        root = insertBST(root, val);
    }

    TreeNode* target = findNode(root, 25);

    Solution sol;

    TreeNode* pred = sol.inorderPredecessor(root, target);
    TreeNode* succ = sol.inorderSuccessor(root, target);

    if (pred) {
        cout << "Inorder Predecessor of " << target->val << " is " << pred->val << endl;
    } else {
        cout << "Inorder Predecessor does not exist" << endl;
    }

    if (succ) {
        cout << "Inorder Successor of " << target->val << " is " << succ->val << endl;
    } else {
        cout << "Inorder Successor does not exist" << endl;
    }

    return 0;
}

