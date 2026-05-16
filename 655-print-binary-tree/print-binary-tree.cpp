class Solution {
public:

    
    int findHeight(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = findHeight(root->left);
        int right = findHeight(root->right);

        if (left > right)
            return left + 1;
        else
            return right + 1;
    }

    
    void solve(TreeNode* root, vector<vector<string>>& ans,
               int row, int col, int gap) {

        if (root == NULL)
            return;

        ans[row][col] = to_string(root->val);

        if (gap > 0) {
            solve(root->left, ans, row + 1, col - gap, gap / 2);

            solve(root->right, ans, row + 1, col + gap, gap / 2);
        }
    }

    vector<vector<string>> printTree(TreeNode* root) {

        int h = findHeight(root);

        int rows = h;

        int cols = (1 << h) - 1;

    
        vector<vector<string>> ans(rows, vector<string>(cols, ""));

        int mid = cols / 2;

        int gap = 0;

        if (h > 1)
            gap = (1 << (h - 2));

        solve(root, ans, 0, mid, gap);

        return ans;
    }
};