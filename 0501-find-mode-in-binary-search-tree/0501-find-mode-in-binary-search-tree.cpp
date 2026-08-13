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
    void inorder(TreeNode* root, map<int, int> &mpp){
        if(!root) return;
        inorder(root -> left, mpp);
        mpp[root-> val]++;
        inorder(root -> right, mpp);
    }
    vector<int> findMode(TreeNode* root) {

        vector<int> ans;
        map<int, int> mpp;
        inorder(root, mpp);
        int mode = 0;
        for(auto it:mpp){
            mode = max(mode, it.second);
        }
        for(auto it:mpp){
            if(it.second == mode) ans.push_back(it.first);
        }
        return ans;
    }
};