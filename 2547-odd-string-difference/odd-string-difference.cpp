class Solution {
public:
    string oddString(vector<string>& words) {
        
        string ans = "";

        for(int i = 0; i < words.size(); i++) {

            int count = 0;

            for(int j = 0; j < words.size(); j++) {

                bool same = true;

                for(int k = 0; k < words[i].size() - 1; k++) {
                    
                    int d1 = words[i][k + 1] - words[i][k];
                    int d2 = words[j][k + 1] - words[j][k];

                    if(d1 != d2) {
                        same = false;
                        break;
                    }
                }

                if(same)
                    count++;
            }

            if(count == 1)
                return words[i];
        }

        return "";
    }
};