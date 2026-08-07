/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root, bool &ans){
        if(root == nullptr) return 0;
        int left_height = height(root -> left, ans);
        int right_height = height(root -> right, ans);
        int diff = abs(left_height - right_height);
        if(diff > 1) ans = false;

        return 1 + max(left_height, right_height);
    }

    bool isBalanced(TreeNode* root) {
        bool ans = true;
        height(root, ans);
        return ans;

    }
};