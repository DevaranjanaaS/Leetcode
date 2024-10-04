class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a1,a2;
        int cnt=0;
        set<int> n1(nums1.begin(),nums1.end()),n2(nums2.begin(),nums2.end());
        for(int i:n1){
            cnt=0;
            for(int j:n2){
                if(i==j){
                    cnt++;
                }
            }
            if(cnt==0){
                a1.push_back(i);
            }
        }
        for(int i:n2){
            cnt=0;
            for(int j:n1){
                if(i==j){
                    cnt++;
                }
            }
            if(cnt==0){
                a2.push_back(i);
            }
        }
        vector<vector<int>> ans;
        ans.push_back(a1);
        ans.push_back(a2);
        return ans;
    }
};