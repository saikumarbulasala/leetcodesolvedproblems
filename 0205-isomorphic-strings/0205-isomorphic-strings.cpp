class Solution {
public:
    bool help(string s, string t){
        map<char, char> mpp;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(mpp.find(s[i]) == mpp.end()){
                mpp[s[i]] = t[i];
            }
            else if(mpp[s[i]] != t[i]){
                return false;
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return help(s,t) && help(t,s);
    }
};