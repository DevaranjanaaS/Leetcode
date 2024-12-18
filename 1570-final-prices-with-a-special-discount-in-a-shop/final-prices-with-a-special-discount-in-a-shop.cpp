class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        for(int i=0;i<prices.size();i++){
            int mini=INT_MAX;
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    mini=prices[j];
                    break;
                }
            }
            if(mini!=INT_MAX){
                ans.push_back(prices[i]-mini);
            }
            else{
                ans.push_back(prices[i]);
            }
        }
        return ans;        
    }
};