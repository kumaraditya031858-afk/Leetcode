class Solution {
public:

    bool match(ListNode* head, TreeNode* root) {

        
        if(head == NULL)
            return true;

        
        if(root == NULL)
            return false;

        
        if(head->val != root->val)
            return false;

        
        return match(head->next, root->left) ||
               match(head->next, root->right);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {

        
        if(root == NULL)
            return false;


        if(match(head, root))
            return true;

        // Move to left and right subtree
        return isSubPath(head, root->left) ||
               isSubPath(head, root->right);
    }
};