class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int mx = 0;
        for (int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                cnt += (mat[i][j] == 1);
            }
            mx = max(mx, cnt);
        }
        vector<int> ans;
        for (int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                cnt += (mat[i][j] == 1);
            }
            if (cnt == mx) {
                ans.push_back(i);
                ans.push_back(cnt);
                break;
            }
        }
        return ans;
    }
};
