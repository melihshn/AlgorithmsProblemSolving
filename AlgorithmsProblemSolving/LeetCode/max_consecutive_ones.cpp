//https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int result = 0;
        int count  = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] == 1)
                count++;
            
            else{
                result = max(result, count);
                count = 0;
            }          
        }
        return max(result, count);
    }
};
