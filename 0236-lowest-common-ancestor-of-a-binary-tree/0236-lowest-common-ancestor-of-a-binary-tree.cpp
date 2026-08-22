/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr || root == q || root == p) return root;

        TreeNode* lChild = lowestCommonAncestor(root -> left, p, q);
        TreeNode* rChild = lowestCommonAncestor(root -> right, p, q);
        
        if(lChild == nullptr) return rChild;
        if(rChild == nullptr) return lChild;
        return root; 
    }
};