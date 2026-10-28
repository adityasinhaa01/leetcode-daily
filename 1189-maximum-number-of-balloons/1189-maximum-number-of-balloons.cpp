
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mpp;

        for(char ch : text) {
            mpp[ch]++;
        }

        int b = mpp['b'];
        int a = mpp['a'];
        int l = mpp['l'] / 2;
        int o = mpp['o'] / 2;
        int n = mpp['n'];

        return min({b, a, l, o, n});
    }
};
