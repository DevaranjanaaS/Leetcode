class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> freq;
        int sum=0;
        bool odd=false;
        for(char c:s){
            freq[c]++;
        }
        for(auto f:freq){
            if(f.second%2==0){
                sum+=f.second;
            }
            else{
                sum+=(f.second-1);
                odd=true;
            }
        }
        if(odd) sum++;
        return sum;
    }
};