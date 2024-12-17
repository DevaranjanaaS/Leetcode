class Solution {
public:
    bool isPalindrome(string s) {
        string ns="";
        for(char c:s){
            if(c >= 'a' && c<='z'){
                ns+=c;
            }
            else if(c >= 'A' && c<='Z'){
                ns+=tolower(c);
            }
            else if(c >= '0' && c<='9'){
                ns+=c;
            }
        }
        string rs=ns;
        reverse(rs.begin(),rs.end());
        return rs==ns;
    }
};