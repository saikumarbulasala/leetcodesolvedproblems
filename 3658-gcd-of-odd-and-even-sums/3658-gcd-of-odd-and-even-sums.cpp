class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int m = n * 2;
        int sumOdd = 0;
        int sumEven = 0;
        for(int i = 1;i<=m;i++){
            if(i % 2 == 1) sumOdd = sumOdd + i;
            else sumEven = sumEven + i;
        }

        int a = sumEven;
        int b = sumOdd;
        while(a > 0 && b > 0){
            if(a > b) a = a % b;
            else b = b % a;
        }

        if(a == 0) return b;
        return a;
        
    }
};