//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        if(arr.size() <= 1){
            arr[0] = -1;
            return arr;
        }
        
        if(arr.size() <= 2){
            arr[0] = arr[1];
            arr[1] = -1;
            return arr;
        }
            
        int temp = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        
        int m;
        
        for(int i = arr.size()-2; i >= 0; i--){
            
            m = arr[i];
            arr[i] = temp;
            
            if(m > temp)
                temp = m;
        }
        
        return arr;
    }
};
