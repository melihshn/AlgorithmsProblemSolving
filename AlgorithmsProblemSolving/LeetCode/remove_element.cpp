//https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val){
        
        int k = 0; 
        int n = nums.size();
        for(int i = 0; i < n; i++)
            if(nums[i] != val)
                nums[k++] = nums[i];
        
        return k;
    }
};

/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        for (auto i = nums.begin(); i != nums.end(); i++){ 
            if (*i == val) { 
                nums.erase(i); 
                i--; 
            } 
        }      
        return nums.size();
    }
};
*/
