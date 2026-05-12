class Solution {
public:

    void change(TreeNode* node) {
        
        // agar node empty hai
        if(node == NULL) {
            return;
        }

        // left aur right ko swap karo
        TreeNode* temp = node->left;
        node->left = node->right;
        node->right = temp;

        // left side par function chalao
        change(node->left);

        // right side par function chalao
        change(node->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        
        change(root);

        return root;
    }
};