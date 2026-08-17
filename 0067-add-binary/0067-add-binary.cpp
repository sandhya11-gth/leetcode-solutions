class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int x = 0;
            int y = 0;

            if (i >= 0)
                x = a[i] - '0';

            if (j >= 0)
                y = b[j] - '0';

            int sum = x + y + carry;

            ans += (sum % 2) + '0';
            carry = sum / 2;

            i--;
            j--;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};