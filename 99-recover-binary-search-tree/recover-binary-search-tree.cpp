class Solution {
public:

    TreeNode* a = NULL;
    TreeNode* b = NULL;
    TreeNode* pre = NULL;

    void solve(TreeNode* root) {

        if (root == NULL)
            return;

        solve(root->left);

        if (pre != NULL && pre->val > root->val) {

            if (a == NULL)
                a = pre;

            b = root;
        }

        pre = root;

        solve(root->right);
    }

    void recoverTree(TreeNode* root) {

        solve(root);

        int temp = a->val;
        a->val = b->val;
        b->val = temp;
    }
};