//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         
        vector<bool> vec(nums.size()+1, false);
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] <= nums.size())
                vec[nums[i]] = true;
            
        for(int i = 1; i < vec.size(); i++)
            if(vec[i] == false)
                result.push_back(i);
        
        return result;
    }
};
