class Solution {
public:
    bool check(vector<int>& nums) {
        int mini=INT_MAX,ind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
                ind=i;
            }
            else if(nums[i]==mini && nums[i-1]>nums[i]){
                mini=nums[i];
                ind=i;
            }
        }
        int cnt=0;
        while(cnt<nums.size()-1){
            if(nums[ind]<=nums[(ind+1)%nums.size()]){
                ind=(ind+1)%nums.size();
            }
            else{
                return false;
            }
            cnt++;
        }
        return true;
    }
};