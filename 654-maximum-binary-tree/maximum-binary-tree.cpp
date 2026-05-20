class Solution {
public:

    TreeNode* makeTree(vector<int>& nums, int l, int r) {

        if(l > r)
            return NULL;

        int mx = l;

        
        for(int i = l; i <= r; i++) {
            if(nums[i] > nums[mx]) {
                mx = i;
            }
        }

        
        TreeNode* root = new TreeNode(nums[mx]);

        
        root->left = makeTree(nums, l, mx - 1);

        
        root->right = makeTree(nums, mx + 1, r);

        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        return makeTree(nums, 0, nums.size() - 1);
    }
};