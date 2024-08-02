class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int,int>m;
       for(int num:nums)
       m[num]++;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
       for(auto i=m.begin();i!=m.end();i++){
        p.push({i->second,i->first});
        if(p.size()>k){
            p.pop();
        }
       }
       vector<int>a;
       while(!p.empty()){
        a.push_back(p.top().second);
        p.pop();
       }
       return a;
    }
};