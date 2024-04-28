class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
        vector<priority_queue<int>> pq(m);
        int answer = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < grid[i].size(); j++) { // Use j instead of i here
                pq[i].push(grid[i][j]);
            }
        }

        int s = 0;
        
        int g ;
            while (true) {
            bool empty = true;
            int g = INT_MIN;
            for (int j = 0; j < m; ++j) {
                if (!pq[j].empty()) {
                    empty = false;
                    int k = pq[j].top();
                    pq[j].pop();
                    g = max(g, k);
                }
            }
            if (empty) break; 
            s += g; 
        }
        return s;
    }
};