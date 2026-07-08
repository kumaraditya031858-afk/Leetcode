class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";

        while (word.size() < k) {
            string add = "";

            for (int i = 0; i < word.size(); i++) {
                add += word[i] + 1;
            }

            word += add;
        }

        return word[k - 1];
    }
};