class Solution {
public:

    bool check(char ch, string allowed)
    {
        for (char x : allowed)
        {
            if (x == ch)
                return true;
        }
        return false;
    }

    int countConsistentStrings(string allowed, vector<string>& words)
    {
        int ans = 0;

        for (string s : words)
        {
            bool ok = true;

            for (char ch : s)
            {
                if (!check(ch, allowed))
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
                ans++;
        }

        return ans;
    }
};