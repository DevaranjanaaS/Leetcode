class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string a=words[i];
            reverse(a.begin(),a.end());
            if(a!=words[i]){
                if(find(words.begin(),words.end(),a)!=words.end()){
                    cnt++;
                }
            }
        }
        return cnt/2;
    }
};