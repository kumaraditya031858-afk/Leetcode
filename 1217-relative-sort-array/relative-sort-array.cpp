class Solution {
public:

    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;

        
        for(int i = 0; i < arr2.size(); i++) {

            for(int j = 0; j < arr1.size(); j++) {

                if(arr1[j] == arr2[i]) {
                    ans.push_back(arr1[j]);

                    
                    arr1[j] = -1;
                }
            }
        }

        
        vector<int> left;

        for(int i = 0; i < arr1.size(); i++) {

            if(arr1[i] != -1) {
                left.push_back(arr1[i]);
            }
        }

        
        sort(left.begin(), left.end());

        
        for(int i = 0; i < left.size(); i++) {
            ans.push_back(left[i]);
        }

        return ans;
    }
};