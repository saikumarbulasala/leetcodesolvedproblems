#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubarrays(vector<int>& nums, int goal){
        if(goal < 0) return 0;

        int l = 0;
        int n = nums.size();
        int r = 0;
        int sum = 0;
        int cnt = 0;
        while(r < n){
            sum += nums[r];
            while(sum > goal){
                sum = sum - nums[l];
                l++;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countSubarrays(nums, goal) - countSubarrays(nums, goal - 1);
        
    }
};