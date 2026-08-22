class Solution {
public:
    int sumOfdigits(int num){
        int sum = 0;
        while(num > 0){
            sum = sum + num % 10;
            num = num / 10;
        }
        return sum;
    }
    int productOfDigit(int num){
        int pro = 1;
        while(num > 0){
            pro = pro * (num % 10);
            num = num / 10;
        }
        return pro;
    }
    bool checkDivisibility(int n) {
        int sum = sumOfdigits(n) + productOfDigit(n);
        if(n % sum == 0) return true;
        return false;

        
    }
};