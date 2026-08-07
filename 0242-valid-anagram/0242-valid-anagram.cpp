class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26, 0);
        if(s.size() != t.size()) return false;
        for(auto ch : s){
            arr[ch - 'a']++;
        }
        for(auto ch: t){
            arr[ch -'a']--;
        }
        for(int i = 0;i<26;i++){
            if(arr[i] != 0) return false;

        }
        return true;

    }
};