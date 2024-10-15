class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt=0;
        int cz=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0'){
                cz++;
                cout<<cz;
            }
            else{
                cnt=cnt+cz;
            }
        }
        return cnt;
    }
};