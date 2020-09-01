//https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        vector<int> B(A.size());
        int k = 0;
        int l = A.size()-1;
        for(int i = 0; i < A.size(); i++){
            
            if(A[i] % 2 == 0)
                B[k++] = A[i];
                
            else
                B[l--] = A[i];
        }
        return B;
    }
};
