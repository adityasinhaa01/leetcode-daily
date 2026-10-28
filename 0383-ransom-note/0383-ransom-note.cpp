class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1 = ransomNote.size();
        int n2 = magazine.size();

        unordered_map<char, int> rn;
        unordered_map<char, int> mag;

        for(int i = 0; i < max(n1, n2); i++){
            if( i < n1 ) rn[ransomNote[i]]++;
            if( i < n2 ) mag[magazine[i]]++;
        }

        for( auto it : rn){
            if(rn[it.first] > mag[it.first]) return false;
        }

        return true;
    }
};