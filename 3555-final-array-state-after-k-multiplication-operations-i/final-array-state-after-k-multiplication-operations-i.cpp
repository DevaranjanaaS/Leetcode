class Solution {
public:
    int minimum(vector<int> nums){
        int mini=INT_MAX,ind=-1;
        for(int i=0;i<nums.size();i++){
            if(mini>nums[i]){
                mini=nums[i];
                ind=i;
            }
        }
        return ind;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int mini=minimum(nums);
            nums[mini]=nums[mini]*multiplier;
        }
        return nums;
    }
};