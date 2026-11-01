class Solution {
public:
    long long noOfHrs(vector<int> &piles, int hour){
        long long  totalHrs = 0;
        int n = piles.size();
        for(int i =0;i<n;i++){
            totalHrs += ceil((double) piles[i] / (double)hour);
        }
        return totalHrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while(low <= high){
            int mid = (low + high)/2;
            long long noOfhrs = noOfHrs(piles, mid);
            if(noOfhrs <= h){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;

    }
};