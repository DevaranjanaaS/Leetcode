class Solution {
public:
    char maxofthree(int a, int b, int c) {
        if (a > b) {
            if (a > c) {
                return 'a';
            } else {
                return 'c';
            }
        } else {
            if (b > c) {
                return 'b';
            } else {
                return 'c';
            }
        }
    }
    string longestDiverseString(int a, int b, int c) {
        string ans = "";
        while (a > 0 || b > 0 || c > 0) {
            char maxChar = maxofthree(a, b, c);
            int len = ans.length();

            // Check if the last two characters are the same
            if (len >= 2 && ans[len - 1] == maxChar && ans[len - 2] == maxChar) {
                // If the maximum character has already been used twice, pick the next largest
                if (maxChar == 'a') {
                    maxChar = b >= c ? 'b' : 'c';
                } else if (maxChar == 'b') {
                    maxChar = a >= c ? 'a' : 'c';
                } else {
                    maxChar = a >= b ? 'a' : 'b';
                }

                // If that character count is zero, break the loop
                if ((maxChar == 'a' && a == 0) || (maxChar == 'b' && b == 0) || (maxChar == 'c' && c == 0)) {
                    break;
                }
            }

            // Append the selected character to the answer string and decrement its count
            ans += maxChar;
            if (maxChar == 'a') a--;
            else if (maxChar == 'b') b--;
            else c--;
        }

        return ans;
    }
};