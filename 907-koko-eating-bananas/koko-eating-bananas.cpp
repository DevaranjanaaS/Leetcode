class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, hi = *max_element(piles.begin(), piles.end());
        int ans = INT_MAX;
        while (l <= hi) {
            int mid = (l + hi) / 2;
            long long temp = 0;
            for (int i = 0; i < piles.size(); i++) {
                temp += (static_cast<long long>(piles[i])+ mid - 1) / mid;
            }
            if (temp <= h)
                ans = min(ans, mid);
            if (temp <= h) {
                hi = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};