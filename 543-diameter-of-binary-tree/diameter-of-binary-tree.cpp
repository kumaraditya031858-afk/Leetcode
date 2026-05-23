class Solution {
public:

    int d = 0;

    int solve(TreeNode* root) {

        if(root == NULL)
            return 0;

        int left = solve(root->left);
        int right = solve(root->right);

        d = max(d, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {

        solve(root);

        return d;
    }
};