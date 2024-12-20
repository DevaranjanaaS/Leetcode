class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> f1;
        unordered_map<char, int> f2;
        for (int i = 0; i < s.length(); i++) {
            f1[s[i]]++;
            f2[t[i]]++;
        }
        int sum = 0;
        set<char> ns;
        for (char c : s)
            ns.insert(c);
        for (char c : ns) {
            if (f2[c] < f1[c])
                sum += f1[c] - f2[c];
        }
        return sum;
    }
};