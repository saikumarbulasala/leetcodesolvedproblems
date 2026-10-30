class Solution {
public:
    int digitCnt(int number){
        int cnt = 0;
        while(number > 0 ){
            int lastDigit = number % 10;
            cnt++;
            number = number / 10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int evenCnt = 0;
        for(int i = 0;i<n;i++){
            int digits = digitCnt(nums[i]);
            if(digits % 2 == 0) evenCnt++;
        }
        return evenCnt;
    }
};