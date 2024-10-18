class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        stack<char> a;
        int i=0;
        for(i=0;i<word.length();i++){
            if(word[i]!=ch){
                a.push(word[i]);
            }
            else{
                a.push(word[i]);
                break;
            }
        }
        if(i==word.length()){return word;}
        while(!a.empty()){
            ans+=a.top();
            a.pop();
        }
        for(int j=i+1;j<word.length();j++){
            ans+=word[j];
        }
        return ans;
    }
};