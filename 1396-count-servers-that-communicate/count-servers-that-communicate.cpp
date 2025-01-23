class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int ans=0;
        vector<int> s1(grid.size(),0);
        vector<int> s2(grid[0].size(),0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    s1[i]++;
                    s2[j]++;
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1 && (s1[i]>1 || s2[j]>1)){
                    ans++;
                }
            }
        }
        return ans;        
    }
};