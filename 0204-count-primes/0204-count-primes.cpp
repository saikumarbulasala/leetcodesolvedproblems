class Solution {
public:
    int countPrimes(int n) {
        vector<int> primeArr(n);
        for(int i = 2;i<n;i++){
            primeArr[i] = 1;
        }
        for(int i = 2; i * i <= n;i++){
            for(int j = i * i;j<n;j = j + i){
                primeArr[j] = 0;
            }
        }

        int cnt = 0;
        for(int i = 0;i<primeArr.size();i++){
            cnt = cnt + primeArr[i];
        }
        return cnt;
    }
};