class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen_num;
        while(n!=1 && seen_num.find(n)==seen_num.end()){
            seen_num.insert(n);
            int sum=0;
            while(n>0){
                sum+=(n%10)*(n%10);
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    }
};