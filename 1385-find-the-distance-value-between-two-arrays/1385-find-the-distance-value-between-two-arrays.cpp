class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int value;
        int cnt = 0;
        for(int i = 0;i<n;i++){
            int ele = arr1[i];
            for(int j = 0;j<m;j++){
                value = abs(ele - arr2[j]);
                if(value <= d){
                    break;
                }
            }
            if(value > d) cnt++;
        }
        return cnt;
    }
};