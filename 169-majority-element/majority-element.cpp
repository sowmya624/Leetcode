class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int l=nums.size()/2;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
       int n=m.size();
       for(auto c:m){
        if(c.second>l)
        return c.first;
       }
      return -1;
    }
};