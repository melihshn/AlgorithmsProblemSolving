#include<bits/stdc++.h> 

using namespace std;

//https://practice.geeksforgeeks.org/problems/maximum-sub-array/0

int main() {
	
	int n, lenght, maxarr_start, maxarr_finish, x; 
	int temp_start, temp_finish, sum, max_sum;
	scanf("%d",&n);
	
	vector< vector<int> > arr(n);
	
	for(int i = 0; i < n; i++){
	    scanf("%d",&lenght);
	    for(int j = 0; j < lenght; j++){
	    	scanf("%d",&x);
	    	arr[i].push_back(x);
		}
	}
	
	for(int i = 0; i < n; i++){
	
	    temp_finish = 0;
	    temp_start = 0;
	    sum = 0;
	    max_sum = INT_MIN;
	    maxarr_start = 0;
	    maxarr_finish = 0;
	    
	    for(int j = 0; j < arr[i].size(); j++){
	        if(arr[i][j] >= 0){
	        	if(sum < 0){
	        		sum = 0;
	        		temp_start = j;
				}
	            temp_finish++;
	            sum += arr[i][j];
	        }
	        else{
	            sum = -1;
	            temp_finish = 0;
	        }        
	        if(sum >= max_sum){
	                max_sum = sum;
	                maxarr_start = temp_start;
	                maxarr_finish = temp_finish;
	        }
	    }
	    for(int j = maxarr_start; j < maxarr_start+maxarr_finish; j++)
	        printf("%d ",arr[i][j]);
	    printf("\n");     
	}	
	return 0;
}
