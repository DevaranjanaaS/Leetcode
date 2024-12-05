class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> ord;
        string ans;
        for(int i=0;i<indices.size();i++){
            ord[indices[i]]=s[i];
        }
        for(auto i=ord.begin();i!=ord.end();i++){
            ans+=i->second;
        }
        return ans;
    }
};