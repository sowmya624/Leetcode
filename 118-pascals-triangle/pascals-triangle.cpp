class Solution {
public:
    vector<int>g(int r){
        long long int ans=1;
        vector<int>a;
        a.push_back(ans);
        for(int i=1;i<r;i++){
            ans=ans*(r-i);
            ans=ans/i;
            a.push_back(ans);
        }
        return a;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp;
        for(int i=1;i<=numRows;i++){
            temp.push_back(g(i));
        }
        return temp;
    }
};