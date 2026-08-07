class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mpp;
        int n = s.size();

        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;
        int ans = 0;
        int prev = mpp[s[n-1]];
        ans = ans + prev;
        for(int i = n-2;i>=0;i--){
            if(mpp[s[i]] >= prev){
                ans = ans + mpp[s[i]];
            }
            else{
                ans = ans - mpp[s[i]];
            }
            prev = mpp[s[i]];
        }
        return  ans;
        
    }
};