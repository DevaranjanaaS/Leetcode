class Solution {
public:
    string stringHash(string s, int k) {
        string alpha="abcdefghijklmnopqrstuvwxyz";
        string ans="";
        unordered_map<char,int> ind;
        for(int i=0;i<26;i++){
            ind[alpha[i]]=i;
        }
        int temp;
        for(int i=0;i<s.length();i+=k){
            temp=0;
            for(int j=i;j<i+k && j<s.length();j++){
                temp+=ind[s[j]];
            }
            ans+=alpha[temp%26];
        }
        return ans;
    }
};