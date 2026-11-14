class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mpp;
        while(n > 0){
            int lastDigit = n % 10;
            mpp[lastDigit]++;
            n = n / 10;
        }

        int score = 0;
        for(auto it: mpp){
            score += (it.first * it.second);
        }
        return score;
    }
};