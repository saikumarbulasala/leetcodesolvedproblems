class Solution {
public:
    int productOfDigits(int num){
        int product = 1;
        while(num > 0){
            int lastDigit = num % 10;
            product *= lastDigit;
            num = num / 10;
        }
        return product;
    }

    int smallestNumber(int n, int t) {
        for(int i = n;i<=100;i++){
            int prod = productOfDigits(i);
            if(prod % t == 0) return i;
        }
        return -1;
    }

};