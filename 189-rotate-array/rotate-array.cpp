class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int> ans;
        for (int i = k; i >= 1; i--) {
            ans.push_back(nums[nums.size() - i]);
        }
        for (int i = 0; i < nums.size() - k; i++) {
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = ans[i];
        }
    }
};