class Solution {
public:
    int countKeyChanges(string s) {
        int cnt=0;
        for(int i=0;i<s.length()-1;i++){
            if(tolower(s[i])!=tolower(s[i+1])){
                cnt++;
            }
        }
        return cnt;
    }
};