//https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0, a = 0, b = 0;
        int k = m+n;
        
        vector<int> mer(k);
        
        while(a < m && b < n)
            
            if(nums1[a] < nums2[b])
                mer[i++] = nums1[a++];
            else
                mer[i++] = nums2[b++];
        
        while(i < k)
        
            if(a < m)
                mer[i++] = nums1[a++];
            else if(b < n)  
                mer[i++] = nums2[b++];
        
        nums1 = mer;
    }
};
