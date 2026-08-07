class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt = 0;

        while(a != 0 || b != 0 || c != 0){
            int abit = a & 1;
            int bbit = b & 1;
            int cbit = c & 1;
            if((cbit&1) == 1){
                if(((abit & 1) == 0) && ((bbit & 1) == 0)) cnt += 1;
            }
            else{
                cnt += abit + bbit;

            }

            a = a >> 1;
            b = b >> 1;
            c = c >> 1;

        }
        return cnt;

    }
};