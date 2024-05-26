class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto c:m){
            
            if(c.second >=2)
            return c.first;
        }
        return -1;
    }
};