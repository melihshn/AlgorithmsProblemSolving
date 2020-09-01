//https://leetcode.com/problems/valid-mountain-array/

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        
        int n = A.size();
        
        if(n < 3)
            return false;
        
        int max_index = distance(A.begin(), max_element(A.begin(), A.begin() + n));
        
        if(max_index == n-1 || max_index == 0)
            return false;
        
        for(int i = 0; i < max_index-1; i++)
            if(A[i] >= A[i+1])
                return false;
        
        for(int i = max_index; i < n-1; i++)
            if(A[i] <= A[i+1])
                return false;
        
        return true;
    }
};

//BU SORUYA GERI DON
