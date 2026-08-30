class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        if(nums.size() == 1) return 1;


        int n = nums.size();
        int mini = INT_MAX;
        int miniInd = -1;

        int maxi = INT_MIN;
        int maxiInd = -1;


        for(int i = 0;i<n;i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                maxiInd = i;
            }
            if(nums[i] < mini){
                mini = nums[i];
                miniInd = i;
            }
        }
        int result = 0;

        int minIndFromFront = miniInd + 1;
        int minIndFromBack = n - miniInd;

        int maxIndFromFront = maxiInd + 1;
        int maxIndFromBack = n - maxiInd;

        int option1 = max(minIndFromFront, maxIndFromFront);
        int option2 = max(minIndFromBack, maxIndFromBack);

        int option4 = maxIndFromFront + minIndFromBack;
        int option3 = minIndFromFront + maxIndFromBack;

        return min({option1, option2, option3, option4});

        return result;

    }
};