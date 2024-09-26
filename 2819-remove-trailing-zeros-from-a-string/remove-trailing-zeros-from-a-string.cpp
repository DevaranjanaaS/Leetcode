class Solution {
public:
    string removeTrailingZeros(string num) {
        int i=num.length()-1;
        cout<<num.length();
        if(num[i]!='0') return num;
        while(num[i]=='0'){
            i--;
        }
        cout<<i;
        return num.substr(0,i+1);
    }
};