class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;

        for (int i = 0; i < m; ++i) {
            int n = mat[i].size();
            int s = 0;
            for (int j = 0; j < n; ++j) {
                s += mat[i][j];
            }
            p.push({s, i});
        }

        vector<int> k1;
        while (k--) {
            k1.push_back(p.top().second);
            p.pop();
        }
        return k1;
    }
};