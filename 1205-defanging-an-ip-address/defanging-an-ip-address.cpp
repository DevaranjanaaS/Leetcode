class Solution {
public:
    string defangIPaddr(string address) {
        stack<char> ans;
        string a="";
        for(char c:address){
            if(c=='.'){
                ans.push('[');
                ans.push('.');
                ans.push(']');
            }
            else{
                ans.push(c);
            }
        }
        while(!ans.empty()){
            a+=ans.top();
            ans.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};