//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count = 0;
        int x;
        for(auto i = 0; i < nums.size(); i++){
            
            x = nums[i] / 10;
            
            if(x < 10 && x != 0)
                count++;
            
            else if(x >= 100 && x < 1000)
                count++;
        }
        return count;
    }
};
