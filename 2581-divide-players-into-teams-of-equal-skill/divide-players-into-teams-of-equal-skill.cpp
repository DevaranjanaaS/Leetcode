class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long ans=0;
        int x=0,y=skill.size()-1;
        int temp=skill[x]+skill[y];
        for(int i=0;i<skill.size()/2;i++){
            if(skill[x]+skill[y]!=temp)return -1;
            ans+=(skill[x]*skill[y]);
            x++;
            y--;
        }
        return ans;
    }
};