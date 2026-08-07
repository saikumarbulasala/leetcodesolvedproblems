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
    void inorder(TreeNode* root, long mini, long maxi, bool &ans){
        if(root == nullptr) return;
        inorder(root -> left, mini, root -> val, ans);
        if(root -> val <= mini || root -> val >= maxi) {
            ans = false;
        }
        inorder(root -> right, root -> val, maxi, ans);
    }
    bool isValidBST(TreeNode* root) {
        bool ans = true;
        long mini = LONG_MIN;
        long maxi = LONG_MAX;
        inorder(root, mini, maxi, ans);
        return ans;

    }
};