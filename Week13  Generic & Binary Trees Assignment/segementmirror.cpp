#include <iostream>

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
    bool isMirror(TreeNode* p, TreeNode* q) {
        if (!p && !q)
            return true;
        if (p && q) {
            return (p->val == q->val)
                && isMirror(p->left, q->right)
                && isMirror(p->right, q->left);
        }
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};

// Helper function to create a new TreeNode
TreeNode* newNode(int val) {
    return new TreeNode(val);
}

int main() {
    // Create the tree [1, 2, 2, 3, 4, 4, 3]
    TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(4);
    root->right->right = newNode(3);

    Solution sol;
    bool result = sol.isSymmetric(root);

    if (result) {
        std::cout << "The tree is symmetric." << std::endl;
    } else {
        std::cout << "The tree is not symmetric." << std::endl;
    }

    // Clean up the allocated memory (not mandatory for this example but good practice)
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
