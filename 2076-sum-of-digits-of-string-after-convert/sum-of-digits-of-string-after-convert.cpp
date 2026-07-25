class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            int num = s[i] - 'a' + 1;

            if (num >= 10) {
                sum += num / 10;
                sum += num % 10;
            } else {
                sum += num;
            }
        }

        while (k > 1) {
            int temp = 0;

            while (sum > 0) {
                temp += sum % 10;
                sum = sum / 10;
            }

            sum = temp;
            k--;
        }

        return sum;
    }
};