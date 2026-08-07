class Solution {
public:
    long long  totalHrs(vector<int>& piles, int mid){
        long long  total_hrs = 0;
        for(int i = 0;i<piles.size();i++){
            total_hrs += ceil((double)piles[i] / (double)mid);
        }
        return total_hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxi = piles[0];
        for(int i = 0;i<n;i++){
            maxi = max(maxi, piles[i]);
        }
        int low = 1;
        int high = maxi;
        while(low <= high){
            int mid = (low + high)/2;
            if(totalHrs(piles, mid) <= h){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;

    }
};