class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        set<int> st;
        for(int i = 0;i<n;i++){
            st.insert(s[i]);
        }
        return st.size();
        
    }
};