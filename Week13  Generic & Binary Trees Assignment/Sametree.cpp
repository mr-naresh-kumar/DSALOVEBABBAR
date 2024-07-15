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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        }
        if (p && q) {
            return (p->val == q->val)
                && isSameTree(p->left, q->left)
                && isSameTree(p->right, q->right);
        }
        return false;
    }
};

// Helper function to create a new TreeNode
TreeNode* newNode(int val) {
    return new TreeNode(val);
}

int main() {
    // Create the first tree [1, 2, 3]
    TreeNode* root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);

    // Create the second tree [1, 2, 3]
    TreeNode* root2 = newNode(1);
    root2->left = newNode(2);
    root2->right = newNode(3);

    Solution sol;
    bool result = sol.isSameTree(root1, root2);

    if (result) {
        std::cout << "The trees are the same." << std::endl;
    } else {
        std::cout << "The trees are not the same." << std::endl;
    }

    // Clean up the allocated memory (not mandatory for this example but good practice)
    delete root1->left;
    delete root1->right;
    delete root1;
    delete root2->left;
    delete root2->right;
    delete root2;

    return 0;
}
