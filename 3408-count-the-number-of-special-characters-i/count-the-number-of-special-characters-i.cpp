class Solution {
public:
    int numberOfSpecialChars(string word) {
        string ans="";
        for(int i=0;i<word.length();i++){
            if(int(word[i])>96 && int(word[i])<123){
                if(find(word.begin(),word.end(),toupper(word[i]))!=word.end()){
                    if(find(ans.begin(),ans.end(),word[i])==ans.end()){
                        ans+=word[i];
                    }
                }
            }
        }
        cout<<ans;
        return ans.length();
    }
};