class Solution {
public:
    bool divideArray(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {

            int count = 0;

            for (int j = 0; j < nums.size(); j++) {

                if (nums[i] == nums[j])
                    count++;

            }

            if (count % 2 == 1)
                return false;
        }

        return true;
    }
};