class Solution {
public:
    int minimumPushes(string word) {
        int sum=0,i=1;
        int len=word.length();
        while(len>0){
            int x=std::min(len,8);
            sum+=x*i;
            i++;
            len-=8;
        }
        return sum;
    }
};