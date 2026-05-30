class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        for(int i = 0; i < n; i++) {

            if(nums[i] == 0) {
                ans[i] = 0;
            }
            else {
                int pos = i + nums[i];

                // circular array handle karne ke liye
                while(pos < 0) {
                    pos += n;
                }

                while(pos >= n) {
                    pos -= n;
                }

                ans[i] = nums[pos];
            }
        }

        return ans;
    }
};