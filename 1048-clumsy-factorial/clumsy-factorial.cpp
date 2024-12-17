class Solution {
public:
    int clumsy(int n) {
        stack<int> ans;
        int cnt=0,nans=0;
        ans.push(n);
        for(int i=n-1;i>0;i--){
            if(cnt%4==0){
                int temp=ans.top();
                ans.pop();
                int a=temp*i;
                ans.push(a);
            }
            else if(cnt%4==1){
                int temp=ans.top();
                ans.pop();
                int a=temp/i;
                ans.push(a);
            }
            else if(cnt%4==2){
                ans.push(i);
            }
            else{
                ans.push(-i);
            }
            cnt++;
        }
        while(!ans.empty()){
            nans+=ans.top();
            ans.pop();
        }
        return nans;
    }
};