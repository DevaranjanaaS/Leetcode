class Solution {
public:
    vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    stringstream ss(str);
    string token;
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> w1=split(s1,' ');
        vector<string> w2=split(s2,' ');  
        vector<string> ans; 
        
        unordered_map<string,int> freq;
        for(string s:w1){
            freq[s]+=1;
        }
        for(string s:w2){
            freq[s]+=1;
        }
        for(auto ent:freq){
            if(ent.second==1){
                ans.push_back(ent.first);
            }
        }
        return ans;
    }
};