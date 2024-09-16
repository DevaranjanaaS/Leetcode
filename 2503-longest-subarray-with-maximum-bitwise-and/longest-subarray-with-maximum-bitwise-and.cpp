class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        int cnt=0,res=0;
        cout<<max;
        for(int i=0;i<nums.size();i++){
            if(max==nums[i]){
                cnt++;
                res=std::max(res,cnt);
            }
            else{
                cnt=0;
            }
        }
        return res;
    }
};