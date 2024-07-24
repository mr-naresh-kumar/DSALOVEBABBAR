#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& in) {
        if (!root) return;
        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }

    TreeNode* buildTree(vector<int>& in, int start, int end) {
        if (start > end) return nullptr;
        
        int mid = (start + end) >> 1;
        TreeNode* root = new TreeNode(in[mid]); 
        root->left = buildTree(in, start, mid - 1);
        root->right = buildTree(in, mid + 1, end);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> in;
        inorder(root, in);

        // build balanced BST using inorder traversal 
        return buildTree(in, 0, in.size() - 1);
    }
};

// Function to print inorder traversal of the tree
void printInOrder(TreeNode* node) {
    if (node == nullptr) return;
    printInOrder(node->left);
    cout << node->val << " ";
    printInOrder(node->right);
}

int main() {
    // Create an unbalanced BST
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    root->right->right->right = new TreeNode(4);
    root->right->right->right->right = new TreeNode(5);

    cout << "Original BST (InOrder): ";
    printInOrder(root);
    cout << endl;

    Solution solution;
    TreeNode* balancedRoot = solution.balanceBST(root);

    cout << "Balanced BST (InOrder): ";
    printInOrder(balancedRoot);
    cout << endl;

    // Cleanup memory (not comprehensive, just for this small example)
    delete root->right->right->right->right;
    delete root->right->right->right;
    delete root->right->right;
    delete root->right;
    delete root;

    // Proper cleanup for balancedRoot can be added as well if necessary
    return 0;
}
