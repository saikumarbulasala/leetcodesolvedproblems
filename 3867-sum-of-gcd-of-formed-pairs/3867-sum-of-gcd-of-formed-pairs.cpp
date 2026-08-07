#include <vector>
#include <numeric> 
#include <algorithm>
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int  maxi = nums[0];
        
        for(int i = 0;i<n;i++){
            maxi = max(nums[i], maxi);
            prefixGcd[i] = gcd(nums[i], maxi);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans = 0;
        int left = 0;
        int right = n-1;
        while(left < right){
            ans = ans + gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }
        return ans;
    }
};