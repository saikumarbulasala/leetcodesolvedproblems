class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       string word;
       vector<string> words;

       while(ss >> word){
        words.push_back(word);
       } 
       int n = words.size();
       string ans = "";
       for(int i = n-1;i>=0;i--){
        ans = ans + words[i] + " ";
       }
       ans.pop_back();
       return ans;
       
    }
};