//https://leetcode.com/problems/duplicate-zeros/

class Solution {
public:
    void duplicateZeros(vector<int>& arr){
        
        int n = arr.size();
        int i = 0, k = 0;
        vector<int> b;
        
        while(i < n){
            
            b.push_back(arr[k]);
            
            if(arr[k] == 0 && i != n-1){
                b.push_back(0);
                i++;
            }
            i++;
            k++;
        }
        
        arr = b;
    }
};
//Your runtime beats 90.47 % of cpp submissions

/*
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        vector<int>::iterator it1, it2;
        
        int n = arr.size(); 
        int count = 0;
        
        for(int i = 0; i < n; i++){
            
            if(arr[i] == 0){
                count++;
                arr.insert(arr.begin()+i, 0);
                i++;
            } 
        }
        it1 = arr.end(); 
        it2 = arr.end();
        it1 -= count;
        arr.erase(it1, it2); 
    }
};
//Your runtime beats 39.19 % of cpp submissions
*/

