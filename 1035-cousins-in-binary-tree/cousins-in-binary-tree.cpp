/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 * };
 */

class Solution {
public:

    int dx = -1, dy = -1;
    int px = -1, py = -1;

    void check(TreeNode* root, int parent, int level, int x, int y) {

        if (root == NULL)
            return;

        if (root->val == x) {
            dx = level;
            px = parent;
        }

        if (root->val == y) {
            dy = level;
            py = parent;
        }

        check(root->left, root->val, level + 1, x, y);
        check(root->right, root->val, level + 1, x, y);
    }

    bool isCousins(TreeNode* root, int x, int y) {

        check(root, -1, 0, x, y);

        if (dx == dy && px != py)
            return true;

        return false;
    }
};