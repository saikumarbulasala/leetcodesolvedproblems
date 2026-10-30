class Solution {
public:
    bool isSelfDividing(int number){
        int dup = number;
        while(number > 0){
            int lastDigit = number % 10;
            if(lastDigit == 0) return false;
            else if(dup % lastDigit != 0) return false;
            number= number / 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left;i<=right;i++){
            bool res = isSelfDividing(i);
            if(res == true) ans.push_back(i);
        }
        return ans;
    }
};