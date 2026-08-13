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
    void inorder(TreeNode* root, vector<int> &values){
        if(root == nullptr) return;
        inorder(root -> left, values);
        values.push_back(root -> val);
        inorder(root -> right, values);

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> values;
        inorder(root, values);
        int n = values.size();
        int i = 0;
        int j = n -1;
        while(i < j){
            if(values[i] + values[j] == k) return true;
            else if(values[i] + values[j] < k) i++;
            else j--;
        }
        return false;
    }
};