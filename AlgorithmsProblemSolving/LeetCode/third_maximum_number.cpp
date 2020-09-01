//https://leetcode.com/problems/third-maximum-number/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        set<int, greater<int> > test(nums.begin(), nums.end());
        set <int, greater<int> >:: iterator itr; 
        itr = test.begin();
        itr++;
        itr++;
        
        if(test.size() < 3)
            return *max_element(nums.begin(),nums.end());
       
        return *itr;
    }
};

//BU SORUYA GERI DON
