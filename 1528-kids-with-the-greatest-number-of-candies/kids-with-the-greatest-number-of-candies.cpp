class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> temp=candies;
        vector<bool> ans;
        sort(temp.begin(),temp.end());
        int high=temp[temp.size()-1];
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=high){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};