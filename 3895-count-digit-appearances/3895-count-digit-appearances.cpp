class Solution {
public:
    int digitCnt(int number, int digit){
        int cnt = 0;
        while(number > 0){
            int lastDigit = number % 10;
            if(lastDigit == digit) cnt++;
            number = number / 10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int noOfDigits = 0;
        for(int i = 0;i<n;i++){
            noOfDigits += digitCnt(nums[i], digit);
        }
        return noOfDigits;
    }
};