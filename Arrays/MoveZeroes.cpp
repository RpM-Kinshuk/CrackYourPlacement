#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = 0;
        for(int i=0; i<nums.size(); i++)
            if(nums[i]==0)
                sz++;
            else if(sz)
            {
                nums[i-sz] = nums[i];
                nums[i] = 0;
            }
    }
};