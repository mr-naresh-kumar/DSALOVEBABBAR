#include <iostream>
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (!root) return 0;

        int ans = 0;
        if (root->val >= low && root->val <= high) {
            ans += root->val;
        }
        if (root->val > low) {
            ans += rangeSumBST(root->left, low, high);
        }
        if (root->val < high) {
            ans += rangeSumBST(root->right, low, high);
        }
        return ans;
    }
};

TreeNode* insertLevelOrder(int arr[], int i, int n) {
    TreeNode* root = nullptr;
    if (i < n) {
        root = new TreeNode(arr[i]);
        root->left = insertLevelOrder(arr, 2 * i + 1, n);
        root->right = insertLevelOrder(arr, 2 * i + 2, n);
    }
    return root;
}

void deleteTree(TreeNode* root) {
    if (root) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

int main() {
    int arr[] = {10, 5, 15, 3, 7, -1, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = insertLevelOrder(arr, 0, n);

    Solution solution;
    int low = 7;
    int high = 15;
    int sum = solution.rangeSumBST(root, low, high);
    cout << "Range Sum BST: " << sum << endl;

    deleteTree(root);
    return 0;
}
