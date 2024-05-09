class Solution {
public:
    void fc(int indx, int target, vector<int>& c, vector<vector<int>>& ans, vector<int>& ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        
        for (int i = indx; i < c.size(); ++i) {
            if (i > indx && c[i] == c[i - 1])  // Skip duplicate elements
                continue;
            if (c[i] <= target) {
                ds.push_back(c[i]);
                fc(i + 1, target - c[i], c, ans, ds);
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        fc(0, target, candidates, ans, ds);
        return ans;
    }
};
