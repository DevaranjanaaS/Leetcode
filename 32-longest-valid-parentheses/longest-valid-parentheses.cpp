class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> ans;
        ans.push(-1);
        int ret=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                ans.push(i);
            }
            else {
                ans.pop();
                if(ans.empty()){
                    ans.push(i);
                }
                else{
                    ret=max(ret,i-ans.top());
                }
            }
        }
        return ret;
    }
};