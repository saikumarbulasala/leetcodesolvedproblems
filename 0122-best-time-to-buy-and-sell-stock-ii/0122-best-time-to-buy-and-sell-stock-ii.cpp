class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int profit = 0;
        for(int i =0;i<n;i++){
            if(i > 0 && prices[i] - prices[i-1] >= 0){
                profit += prices[i] - prices[i-1];
            }
        }
        
        return profit;
    }
};