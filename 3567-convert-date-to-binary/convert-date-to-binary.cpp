class Solution {
public:
    vector<int> tobinary(int a){
        vector<int> ans;
        while(a!=0){
            ans.push_back(a%2);
            a=a/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string convertDateToBinary(string date) {
        vector<int> a,b,c;
        string result="";
        a=tobinary(stoi(date.substr(0,4)));
        b=tobinary(stoi(date.substr(5,2)));
        c=tobinary(stoi(date.substr(8,2)));
        for (int bit : a) result += to_string(bit);
        result += '-';
        for (int bit : b) result += to_string(bit);
        result += '-';
        for (int bit : c) result += to_string(bit);
        return result;
    }
};