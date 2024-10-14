class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int cnt,maxi=0;
        for(int i=0;i<sentences.size();i++){
            cnt=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    cnt++;
                }
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};