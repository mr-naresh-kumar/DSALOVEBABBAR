#include <iostream>
#include <cmath>

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
    bool isbalanced = true;

    int height(TreeNode* root) {
        if (!root) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        // Check for current node, is it balanced
        if (isbalanced && abs(lh - rh) > 1) {
            isbalanced = false;
        }
        return std::max(lh, rh) + 1;
    }

    bool isBalanced(TreeNode* root) {
        height(root);
        return isbalanced;
    }
};

// Helper function to create a new TreeNode
TreeNode* newNode(int val) {
    return new TreeNode(val);
}

int main() {
    // Create a balanced binary tree [1, 2, 2, 3, 3, null, null, 4, 4]
    TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(3);
    root->left->left->left = newNode(4);
    root->left->left->right = newNode(4);

    Solution sol;
    bool balanced = sol.isBalanced(root);

    if (balanced) {
        std::cout << "The tree is balanced." << std::endl;
    } else {
        std::cout << "The tree is not balanced." << std::endl;
    }

    // Clean up the allocated memory (not mandatory for this example but good practice)
    delete root->left->left->left;
    delete root->left->left->right;
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
