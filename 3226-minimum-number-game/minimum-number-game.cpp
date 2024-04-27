class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>p;
        for(auto num:nums)
        p.push(num);
        vector<int>a;
        while(!p.empty()){
            int f=p.top();
            p.pop();
            int s=p.top();
            p.pop();
            a.push_back(s);
            a.push_back(f);
        }
        return a;
    }
};