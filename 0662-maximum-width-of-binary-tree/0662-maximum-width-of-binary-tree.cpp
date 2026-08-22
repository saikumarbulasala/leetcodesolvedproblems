class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        if (root == nullptr)
            return 0;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        int ans = 0;

        while (!q.empty()) {

            int size = q.size();

            unsigned long long mini = q.front().second;

            unsigned long long first = 0, last = 0;

            for (int i = 0; i < size; i++) {

                TreeNode* node = q.front().first;
                unsigned long long curr_id = q.front().second - mini;

                q.pop();   

                if (i == 0)
                    first = curr_id;

                if (i == size - 1)
                    last = curr_id;

                if (node->left != nullptr) {
                    q.push({node->left, curr_id * 2 + 1});
                }

                if (node->right != nullptr) {
                    q.push({node->right, curr_id * 2 + 2});
                }
            }

            ans = max(ans, (int)(last - first + 1));
        }

        return ans;
    }
};