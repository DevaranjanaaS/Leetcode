class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> freq;
        set<int> ans;
        for(int i:nums){
            freq[i]++;
        }
        for(int i:nums){
            if(freq[i]==2){
                ans.insert(i);
            }
        }
        vector<int> a(ans.begin(),ans.end());
        return a;
    }
};