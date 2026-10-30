class Solution {
public:

    int maxChar(vector<int> &a){
        int maxc = 0;
        for(int i = 0; i < a.size(); ++i)   maxc = max(maxc, a[i]);
        return maxc;
    }

    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        int res = 0;
        vector<int> f(265,0);
        int n = s.length();

        for(high = 0; high < n; high++){
            f[s[high]]++;
            int maxchar = maxChar(f);
            int len = high - low + 1;
            int diff = len - maxchar;

            while(diff > k){
                f[s[low]]--;
                low++;
                len = high - low + 1;
                maxchar = maxChar(f);
                diff = len - maxchar;
            }

            len = high - low + 1;
            res = max(res, len);

        }

        return res;
    }
};