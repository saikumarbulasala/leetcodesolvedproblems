class Solution {
public:
    int beauty(vector<int> arr){
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i =0;i<26;i++){
            if(arr[i] != 0){
                mini = min(mini, arr[i]);
                maxi = max(maxi, arr[i]);
            }
        }
        return maxi - mini;

    }
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;
        for(int i =0;i<n;i++){
            vector<int> arr(26, 0);
            for(int j = i;j<n;j++){
                arr[s[j] - 'a']++;
                ans = ans + beauty(arr);
            }
        }
        return ans;
    }
};