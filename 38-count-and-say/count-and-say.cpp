class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        string news = "";
        for (int i = 1; i < n; i++) {
            news="";
            char temp=ans[0];
            int cnt=0;
            for(int i=0;i<ans.length();i++){
                if(ans[i]==temp){
                    cnt++;
                }
                else{
                    news+=to_string(cnt);
                    news+=temp;
                    temp=ans[i];
                    cnt=1;
                }
            }
            news+=to_string(cnt);
            news+=temp;
            ans=news;
        }
        return ans;
    }
};