class Solution {
public:
    bool checkString(string s) {

        bool ans = true;
        int n = s.size();
        if(n == 1) return true;
        int indexB = 1000;

        for(int i = 0;i<n;i++){
            if(s[i] == 'b'){
                indexB = i;
                break;
            }
        }

        for(int i = 0;i<n;i++){
            if(s[i] == 'a'){
                if(i > indexB){
                    ans = false;
                    break;
                }
            }
        }
        return ans;
    }
};