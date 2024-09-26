class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size()!=s.length()) return false;
        string ans="";
        for(int i=0;i<words.size();i++){
            ans+=words[i][0];
        }
        if(ans==s) return true;
        return false;
    }
};