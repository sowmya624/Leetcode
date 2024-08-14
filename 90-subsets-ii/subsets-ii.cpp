class Solution {
public:
void f(int sum, vector<int> &v, vector<int>& nums, vector<vector<int>>& ans, int n) {
        ans.push_back(v);
        for (int i = sum; i < n; i++) {
            // Skip duplicates
            if (i > sum && nums[i] == nums[i - 1])
                continue;
            v.push_back(nums[i]);
            f(i + 1, v, nums, ans, n);
            v.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = nums.size();
        // Sort the array to handle duplicates
        sort(nums.begin(), nums.end());
        f(0, ds, nums, ans, n);
        return ans;
    }
};