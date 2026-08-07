class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        char ch;
        unordered_map<char, int> mpp;
        for(int i = 0;i<n;i++){
            mpp[s[i]]++;
            if(mpp[s[i]] == 2){
                ch = s[i];
                break;
            }
        }
        return ch;
    }
};