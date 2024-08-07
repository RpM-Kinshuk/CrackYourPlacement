# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump;
        for(int i=0; i<nums.size(); i++)
        {
            if(ump.find(target-nums[i])!=ump.end())
                return {i,ump[target-nums[i]]};
            ump[nums[i]] = i;
        }
        return {-1,-1};
    }
};