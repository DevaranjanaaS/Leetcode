class Solution {
public:
    int firstUniqChar(string s) {
        int i,j;
        for(i=0;i<s.length();i++){
            for(j=0;j<s.length();j++){
                if(i!=j && s[i]==s[j]) break;
            }
            if(j==s.length()){
                return i;
            }
        }
        return -1;
    }
};