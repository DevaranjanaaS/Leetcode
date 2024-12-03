class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prd=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                prd*=nums[i];
            }
            else{
                cnt++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                if(nums[i]!=0){
                    ans.push_back(prd/nums[i]);
                }else{
                    ans.push_back(prd);
                } 
            }
            else{
                if(cnt==1 && nums[i]==0){
                    ans.push_back(prd);
                }else{
                    ans.push_back(0);
                }
            }
        }
        return ans;
    }
};