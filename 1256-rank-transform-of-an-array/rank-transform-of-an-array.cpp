class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> a(arr.begin(),arr.end());
        vector<int> ans(a.begin(),a.end());
        sort(ans.begin(),ans.end());
        unordered_map<int,int> rank;
        int i=1;
        for(int el:ans){
            rank[el]=i;
            i++;
        }
        vector<int> newv;
        for(int i=0;i<arr.size();i++){
            newv.push_back(rank[arr[i]]);
        }
        return newv;
    }
};