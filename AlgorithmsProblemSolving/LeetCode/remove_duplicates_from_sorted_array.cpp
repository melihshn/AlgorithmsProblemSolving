//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        
        vector<int>::iterator ip;
        ip = unique(nums.begin(), nums.begin() + nums.size());
        nums.resize(distance(nums.begin(), ip));
        
        return nums.size();
    }
};
