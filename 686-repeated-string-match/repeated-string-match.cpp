class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp = "";
        int cnt = 0;

        while (temp.size() < b.size()) {
            temp = temp + a;
            cnt++;
        }

        if (temp.find(b) != -1)
            return cnt;

        temp = temp + a;
        cnt++;

        if (temp.find(b) != -1)
            return cnt;

        return -1;
    }
};