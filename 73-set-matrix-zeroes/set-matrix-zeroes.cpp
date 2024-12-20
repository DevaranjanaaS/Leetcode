class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> pos;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    pos.push_back({i,j});
                }
            }
        }
        for (auto p:pos) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[p.first][j] = 0;
            }
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][p.second] = 0;
            }
        }
    }
};