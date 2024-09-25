class Solution {
public:
    int minimumChairs(string s) {
        int cnt=0,maxi=0;
        for(char c:s){
            if(c=='E'){
                cnt++;
                maxi=max(cnt,maxi);
            }
            else{
                cnt--;
                maxi=max(cnt,maxi);
            }
        }
        return maxi;
    }
};