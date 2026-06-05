class Solution {
public:

    void path(TreeNode* root, string s, vector<string>& ans)
    {
        if(root == NULL)
            return;

        s = s + to_string(root->val);

        if(root->left == NULL && root->right == NULL)
        {
            ans.push_back(s);
            return;
        }

        s = s + "->";

        path(root->left, s, ans);
        path(root->right, s, ans);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;

        path(root, "", ans);

        return ans;
    }
};