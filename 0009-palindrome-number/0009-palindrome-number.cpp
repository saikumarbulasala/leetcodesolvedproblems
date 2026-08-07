class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int dup = x;

        long long  reverseNum = 0;
        while(x > 0){
            int digit = x % 10;
            x = x /10;
            reverseNum = (reverseNum * 10)+ digit;
        }
        if(reverseNum == dup) return true;
        return false;

    }
};