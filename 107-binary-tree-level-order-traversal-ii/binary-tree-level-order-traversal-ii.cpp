class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> ans;

        // agar tree khaali hai
        if(root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        // jab tak queue khaali na ho
        while(!q.empty()) {

            int n = q.size();   // ek level me kitne nodes hain
            vector<int> level;

            // ek level ke saare nodes uthao
            for(int i = 0; i < n; i++) {

                TreeNode* temp = q.front();
                q.pop();

                // node ki value store karo
                level.push_back(temp->val);

                // left child add karo
                if(temp->left != NULL)
                    q.push(temp->left);

                // right child add karo
                if(temp->right != NULL)
                    q.push(temp->right);
            }

            // poora level answer me daal do
            ans.push_back(level);
        }

        // answer ko ulta kar do
        // taki bottom level pehle aa jaye
        reverse(ans.begin(), ans.end());

        return ans;
    }
};