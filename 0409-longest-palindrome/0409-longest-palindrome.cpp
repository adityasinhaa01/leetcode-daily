class Solution {
public:
    int longestPalindrome(string s) {
        int count[128] = {0};
        int odd_count = 0;
        
        for (char c : s) {
            count[c]++;
            if (count[c] % 2 != 0) {
                odd_count++;
            } else {
                odd_count--;
            }
        }
        
        return odd_count > 0 ? s.length() - odd_count + 1 : s.length();
    }
};
