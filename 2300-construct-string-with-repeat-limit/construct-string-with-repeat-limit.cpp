class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        string ans = "";
        map<char, int, greater<char>> cnt;
        int j;

        for (char c : s) {
            cnt[c]++;
        }
        for (auto i = cnt.begin(); i != cnt.end();) {
            if (i->second <= repeatLimit) {
                ans.append(i->second, i->first);
                i = cnt.erase(i);
            } 
            else {
                ans.append(repeatLimit, i->first);
                i->second = i->second - repeatLimit;
                i++;
                if (i == cnt.end()) {
                    break;
                } else {
                    ans += i->first;
                    i->second--;
                    if (i->second == 0) {
                        cnt.erase(i);
                    }
                }
                i--;
            }
        }
        return ans;
    }
};