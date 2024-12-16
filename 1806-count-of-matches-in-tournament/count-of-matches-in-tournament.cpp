class Solution {
public:
    int numberOfMatches(int n) {
        int nm=0;
        while(n!=1){
            if(n%2==0){
                nm+=n/2;
                n=n/2;
            }
            else{
                nm+=(n-1)/2;
                n=((n-1)/2)+1;
            }
        }
        return nm;
    }
};