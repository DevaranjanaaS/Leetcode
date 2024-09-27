class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int, int> freq;
        for(int num:nums){
            freq[num]++;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]>n)
                return nums[i];
        }
        return 0;
    }
};