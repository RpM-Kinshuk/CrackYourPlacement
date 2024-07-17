# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mj = nums[0], ct = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==mj)
                ct++;
            else
                ct--;
            if(ct==0)
            {
                ct++;
                mj = nums[i];
            }
        }
        return mj;
    }
};