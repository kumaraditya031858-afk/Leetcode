class Solution {
public:

    TreeNode* head = NULL;
    TreeNode* temp = NULL;

    void solve(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }

        solve(root->left);

        
        if(head == NULL)
        {
            head = root;
            temp = root;
        }
        else
        {
            temp->right = root;
            temp = root;
        }

        root->left = NULL;

        solve(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        
        solve(root);

        return head;
    }
};