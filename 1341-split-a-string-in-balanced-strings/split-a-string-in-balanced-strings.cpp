class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0;
        stack<char> stk;
        for(char c:s){
            if(stk.empty()){
                stk.push(c);
            }
            else{
                if(stk.top()==c){
                    stk.push(c);
                }
                else{
                    stk.pop();
                    if(stk.empty()){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};