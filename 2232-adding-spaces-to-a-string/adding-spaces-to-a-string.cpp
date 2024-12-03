class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ns="";
        int j=0;
        for(int i=0;i<s.length();i++){
            if(j < spaces.size() && i==spaces[j]){
                ns+=' ';
                j++;
            }
            ns+=s[i];
        }
        return ns;
    }
};