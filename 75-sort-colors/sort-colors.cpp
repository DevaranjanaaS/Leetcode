class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> cnt;
        for(int n:nums){
            cnt[n]++;
        }
        int i=0;
        for(auto c:cnt){
            while(c.second>0){
                nums[i]=c.first;
                i++;
                c.second--;
            }
        }
    }
};