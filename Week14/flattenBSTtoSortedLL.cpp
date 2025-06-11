#include <iostream>
using namespace std;

// Definition for a BST node (will be reused as ListNode).
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:

    void inorder(TreeNode* root, TreeNode*&prev){
        if(!root) return;

        inorder(root->left, prev);
        prev->left = nullptr;
        prev->right = root;
        prev = root;
        inorder(root->right, prev);
    }

    // Converts BST to a sorted right-skewed linked list in-place.
    TreeNode* treeToLinkedList(TreeNode* root) {
        TreeNode* dummy = nullptr;

        TreeNode* prev = dummy;
        inorder(root, prev);
        prev->left = prev->right = nullptr;
        return dummy->right;
    }
};

// Helper to print right-skewed linked list
void printRightSkewed(TreeNode* head) {
    while (head) {
        cout << head->val;
        if (head->right) cout << " -> ";
        head = head->right;
    }
    cout << endl;
}

// Helper to build sample BST
TreeNode* buildSampleBST() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    return root;
}

int main() {
    Solution sol;
    TreeNode* bstRoot = buildSampleBST();
    
    TreeNode* listHead = sol.treeToLinkedList(bstRoot);
    
    cout << "In-place Converted Linked List: ";
    printRightSkewed(listHead);
    
    return 0;
}
