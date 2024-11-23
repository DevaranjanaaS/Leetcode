class Solution {
public:
    char repeatedCharacter(string s) {
        int i,j,mini=INT_MAX;
        char ret;
        for(i=0;i<s.length();i++){
            for(j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    if(mini>j){
                        mini=j;
                        ret=s[i];
                    }
                    break;
                }
            }
        }
        return ret;
    }
};