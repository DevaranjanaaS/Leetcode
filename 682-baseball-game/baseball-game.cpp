class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> ans;
        int sum=0;
        for(string s:operations){
            if(s=="+"){
                int temp=stoi(ans.top());
                ans.pop();
                int nv=temp+stoi(ans.top());
                ans.push(to_string(temp));
                ans.push(to_string(nv));
            }
            else if(s=="C"){
                ans.pop();
            }
            else if(s=="D"){
                int nv=stoi(ans.top())*2;
                ans.push(to_string(nv));
            }
            else{
                ans.push(s);
            }
        }    
        while(!ans.empty()){
            sum+=stoi(ans.top());
            ans.pop();
        }   
        return sum; 
    }
};