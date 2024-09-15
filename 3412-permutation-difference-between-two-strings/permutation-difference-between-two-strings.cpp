class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            int j=t.find(s[i]);
            ans+=abs(i-j);
        }
        return ans;
    }
};