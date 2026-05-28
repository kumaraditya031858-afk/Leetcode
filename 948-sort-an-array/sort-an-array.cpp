class Solution {
public:

    void merge(vector<int>& arr, int l, int m, int r) {

        vector<int> temp;

        int i = l;
        int j = m + 1;

        
        while (i <= m && j <= r) {

            if (arr[i] < arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }
        }

    
        while (i <= m) {
            temp.push_back(arr[i]);
            i++;
        }

        
        while (j <= r) {
            temp.push_back(arr[j]);
            j++;
        }

        
        for (int k = l; k <= r; k++) {
            arr[k] = temp[k - l];
        }
    }

    void sort(vector<int>& arr, int l, int r) {

        if (l >= r)
            return;

        int m = (l + r) / 2;

        sort(arr, l, m);
        sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }

    vector<int> sortArray(vector<int>& nums) {

        sort(nums, 0, nums.size() - 1);

        return nums;
    }
};