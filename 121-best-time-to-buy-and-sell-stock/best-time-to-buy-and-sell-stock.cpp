#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int mi = INT_MAX;
        int ma = INT_MIN;

        for(int i=0;i<prices.size();i++){
            mi= min(prices[i],mi);
            ma = max(ma,prices[i]-mi);
            
        }

        return ma;
    }
};