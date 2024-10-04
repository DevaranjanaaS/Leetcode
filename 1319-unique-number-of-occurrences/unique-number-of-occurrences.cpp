class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i:arr){
            freq[i]++;
        }
        int cnt=0;
        set<int> a(arr.begin(),arr.end());
        for(int i:a){
            for(int j:a){
                if(i!=j && freq[i]==freq[j])return false;
            }
        }
        return true;
    }
};