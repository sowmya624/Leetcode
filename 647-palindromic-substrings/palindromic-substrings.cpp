class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;

        // Initialize a lookup table of dimensions len(s) * len(s)
        std::vector<std::vector<bool>> dp(s.length(),
                                          std::vector<bool>(s.length(), false));

        // Base case: A string with one letter is always a palindrome
        for (int i = 0; i < s.length(); ++i) {
            dp[i][i] = true;
            ++count;
        }

        // Base case: Substrings of two letters
        for (int i = 0; i < s.length() - 1; ++i) {
            dp[i][i + 1] = (s[i] == s[i + 1]);
            // A boolean value is added to the count where true means 1 and
            // false means 0
            count += dp[i][i + 1];
        }

        // Substrings of lengths greater than 2
        for (int length = 3; length <= s.length(); ++length) {
            for (int i = 0, j = length - 1; j < s.length(); ++i, ++j) {
                dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);
                count += dp[i][j];
            }
        }

        return count;
    }
};