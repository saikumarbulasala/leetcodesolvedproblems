class Solution {
public:
    int sumFun(int num){
        int sum = 0;
        while(num > 0){
            int lastDigit = num % 10;
            sum += lastDigit;
            num  = num / 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        for(int i = 0;i<n;i++){
            int sum = sumFun(nums[i]);
            temp.push_back(sum);
        }
        int it = *min_element(temp.begin(), temp.end());
        return it;
    }
};