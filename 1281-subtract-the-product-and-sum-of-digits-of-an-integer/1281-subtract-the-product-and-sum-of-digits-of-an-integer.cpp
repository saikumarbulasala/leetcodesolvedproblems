class Solution {
public:

    pair<int, int> product(int num){
        int product = 1;
        int sum = 0;

        while(num > 0){
            int lastDigit = num % 10;
            sum += lastDigit;
            product *= lastDigit;
            num = num / 10;
        }
        return {product, sum};

    }

    int subtractProductAndSum(int n) {
        pair<int , int> ans;
        ans = product(n);
        return ans.first - ans.second;
    }
};