class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        vector<int>ls;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(cnt1 == 0 && ele2 != nums[i] ){
                cnt1 = 1;
                ele1 = nums[i];
            }
            else if(cnt2 == 0 && ele1 != nums[i]){
                cnt2 = 1;
                ele2 = nums[i];
            }
            else if(nums[i] == ele1) cnt1++;
            else if(nums[i] == ele2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        int cnt11 = 0, cnt22 = 0;

        for(int i = 0;i<n;i++){
            if(ele1 == nums[i]) cnt11++;
            if(ele2 == nums[i]) cnt22++;
        }
        int mini = (int)(n/3);
        if(cnt11 > mini) ls.push_back(ele1);
        if(cnt22 > mini) ls.push_back(ele2);
        return ls;

    }
};