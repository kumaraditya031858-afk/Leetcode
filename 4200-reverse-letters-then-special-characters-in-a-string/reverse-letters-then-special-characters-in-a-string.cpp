class Solution {
public:
    string reverseByType(string s) {

        string letter = "";
        string special = "";

        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                letter += s[i];
            else
                special += s[i];
        }

        int l = letter.length() - 1;
        int sp = special.length() - 1;

        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = letter[l];
                l--;
            } else {
                s[i] = special[sp];
                sp--;
            }
        }

        return s;
    }
};