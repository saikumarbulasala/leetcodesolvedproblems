class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {

        sort(costs.begin(), costs.end(), [](const vector<int>& a, const vector<int>& b) {
            return (a[0] - a[1]) < (b[0] - b[1]);
        });

        int n = costs.size();
        int a = n / 2;
        int b = n / 2;
        int totalCost = 0;

        for(int i = 0; i < n; i++) {

            if(a > 0) {
                totalCost += costs[i][0];
                a--;
            }
            else {
                totalCost += costs[i][1];
                b--;
            }
        }

        return totalCost;
    }
};