class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int result=0;
        for(int i=0;i<queries.size();i++){
            for(int j=queries[i][0];j<=queries[i][1];j++){
                result=result^arr[j];
            }
            ans.push_back(result);
            result=0;
        }
        return ans;
    }
};