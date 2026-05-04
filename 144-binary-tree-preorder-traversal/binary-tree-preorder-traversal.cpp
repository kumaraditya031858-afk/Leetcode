class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;

        if(root == NULL) return ans;

        // 1. Root
        ans.push_back(root->val);

        // 2. Left
        vector<int> left = preorderTraversal(root->left);

        // 3. Right
        vector<int> right = preorderTraversal(root->right);

        // combine all
        ans.insert(ans.end(), left.begin(), left.end());
        ans.insert(ans.end(), right.begin(), right.end());

        return ans;
    }
};