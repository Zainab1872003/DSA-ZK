class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(m!=n){
            return false;
        }
        vector<int>freq(256,0);
        vector<int>freq1(256,0);
        for(int i = 0;i<n;i++){
            if(!freq[s[i]] && !freq1[t[i]]){
            freq[s[i]] = t[i];
            freq1[t[i]] = s[i];
        }
        else if (freq[s[i]] != t[i]){
            return false;
        }
        }
        return true;
    }
};