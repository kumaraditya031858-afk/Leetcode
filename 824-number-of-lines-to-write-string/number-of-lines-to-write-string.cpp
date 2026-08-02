class Solution {
public:

    int getWidth(char ch, vector<int>& widths) {
        return widths[ch - 'a'];
    }

    vector<int> numberOfLines(vector<int>& widths, string s) {

        int lines = 1;
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {

            int w = getWidth(s[i], widths);

            if (sum + w <= 100) {
                sum = sum + w;
            }
            else {
                lines++;
                sum = w;
            }
        }

        return {lines, sum};
    }
};