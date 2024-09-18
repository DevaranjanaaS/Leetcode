class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(char let:columnTitle){
            ans=(ans*26)+(let-'A'+1);
        }
        return ans;
    }
};