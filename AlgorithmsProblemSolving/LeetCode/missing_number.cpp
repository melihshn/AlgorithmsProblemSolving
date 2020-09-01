//https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int ex = (n*(n+1)) / 2;
        for(auto i : nums)
            ex -= i;
        return ex;
    }
};
