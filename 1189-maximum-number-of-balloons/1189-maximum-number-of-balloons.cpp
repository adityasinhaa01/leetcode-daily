
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mpp;

        for(char ch : text) {
            mpp[ch]++;
        }

        return min({mpp['b'], mpp['a'], mpp['l'] >> 1, mpp['o'] >> 1, mpp['n']});
    }
};
