class Solution {
public:
    int similarPairs(vector<string>& words) {

        int ans = 0;

        for (int i = 0; i < words.size(); i++) {

            for (int j = i + 1; j < words.size(); j++) {

                int a[26] = {0};
                int b[26] = {0};

                for (char ch : words[i]) {
                    a[ch - 'a'] = 1;
                }

                for (char ch : words[j]) {
                    b[ch - 'a'] = 1;
                }

                int ok = 1;

                for (int k = 0; k < 26; k++) {
                    if (a[k] != b[k]) {
                        ok = 0;
                    }
                }

                if (ok == 1) {
                    ans++;
                }
            }
        }

        return ans;
    }
};