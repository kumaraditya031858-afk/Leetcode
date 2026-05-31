class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {

        unordered_map<int, int> pos;

    
        for (int i = 0; i < nums.size(); i++) {
            pos[nums[i]] = i;
        }

        
        for (int i = 0; i < operations.size(); i++) {

            int oldValue = operations[i][0];
            int newValue = operations[i][1];

            int idx = pos[oldValue];

            nums[idx] = newValue;

            pos.erase(oldValue);
            pos[newValue] = idx;
        }

        return nums;
    }
};