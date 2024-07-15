#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = 0, high = 1, mx = 0;
        while(high<prices.size())
        {
            mx = max(mx, prices[high]-prices[low]);
            if(prices[high] < prices[low])
                low = high;
            high++;
        }
        return mx;
    }
};