class Solution {
public:
    string removeStars(string s) {
        stack<char> ans;
        ans.push(' ');
        string ret="";
        for(char c:s){
            if(c=='*'){
                ans.pop();
            }
            else{
                ans.push(c);
            }
        }
        while(!ans.empty()){
            ret+=ans.top();
            ans.pop();
        }
        ret.erase(remove(ret.begin(),ret.end(),' '));
        reverse(ret.begin(),ret.end());  
        return ret;
    }
};