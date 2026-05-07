class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);

        int evenIndex = 0;
        int oddIndex = 1;

        for(int i = 0; i < n; i++) {

            // agar number even hai
            if(nums[i] % 2 == 0) {
                ans[evenIndex] = nums[i];
                evenIndex = evenIndex + 2;
            }
            // agar number odd hai
            else {
                ans[oddIndex] = nums[i];
                oddIndex = oddIndex + 2;
            }
        }

        return ans;
    }
};