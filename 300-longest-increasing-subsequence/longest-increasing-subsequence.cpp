class Solution {
public:
int d(vector<int>& nums,int n,int ind,int p,vector<vector<int>>&dp){
    if(ind==n)
    return 0;
    if(dp[ind][p+1]!=-1)
    return dp[ind][p+1];
    int not1=0+d(nums,n,ind+1,p,dp);
    int t=0;
    if(p==-1||nums[ind]>nums[p]){
    t=1+d(nums,n,ind+1,ind,dp);
    }
    return dp[ind][p+1]=max(not1,t);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return d(nums,n,0,-1,dp);
    }
};