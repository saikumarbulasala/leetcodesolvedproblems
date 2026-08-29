class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int units = 0;
        sort(boxTypes.begin(), boxTypes.end(), [](auto &a , auto &b){
            return a[1] > b[1];
        });
        int n = boxTypes.size();

        for(int i = 0;i<n;i++){
            if(boxTypes[i][0] <= truckSize){
                truckSize -= boxTypes[i][0];
                units += boxTypes[i][0] * boxTypes[i][1];
            }
            else if(truckSize < boxTypes[i][0]){
                units += (truckSize * boxTypes[i][1]);
                truckSize = 0;
            }
        }
        return units;

    }
};