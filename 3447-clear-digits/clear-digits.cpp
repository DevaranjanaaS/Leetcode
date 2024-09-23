class Solution {
public:
    string clearDigits(string s) {
        stack<char> a;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                a.push(s[i]);
                cout<<s[i];
            }
            else{
                if(!a.empty()){
                    a.pop();
                }
            }
        }
        if(a.empty()) return "";
        while(!a.empty()){
            ans+=a.top();
            a.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};