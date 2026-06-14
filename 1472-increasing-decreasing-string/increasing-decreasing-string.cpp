class Solution {
public:
    string sortString(string s) {
        int a[26] = {0};

        for(char ch : s)
            a[ch - 'a']++;

        string ans;

        while(ans.size() < s.size()) {

            for(int i = 0; i < 26; i++) {
                if(a[i] > 0) {
                    ans += char(i + 'a');
                    a[i]--;
                }
            }

            for(int i = 25; i >= 0; i--) {
                if(a[i] > 0) {
                    ans += char(i + 'a');
                    a[i]--;
                }
            }
        }

        return ans;
    }
};