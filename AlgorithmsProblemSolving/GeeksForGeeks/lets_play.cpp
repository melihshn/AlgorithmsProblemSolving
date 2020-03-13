//https://practice.geeksforgeeks.org/problems/lets-play/0

#include <bits/stdc++.h>

using namespace std;

void swap(int &x,int &y){
    
    int temp = x;
    x = y;
    y = temp;
}
int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	   int n, m, rotatime, check = 1;
	   scanf("%d%d",&n,&m);
	    
	   int arr[n][m];
	   int copyarr[n][m];
	    
	   for(int i = 0; i < n; i++)
	       for(int j = 0; j < m; j++){
	           scanf("%d",&arr[i][j]);
	           copyarr[i][j] = arr[i][j];
	       }
	   scanf("%d",&rotatime);
	   while(rotatime--){
	      for(int i = 0; i < n; i++)
	         for(int j = 1; j < m; j++){
	            if(i % 2 == 1)
	               swap(arr[i][0],arr[i][j]);
	            else
	               swap(arr[i][m-1],arr[i][m-j-1]);
	        }
	   }
	   for(int i = 0; i < n; i++){
	          for(int j = 0; j < m; j++){
                if(arr[i][j] != copyarr[i][j]){
                    check = 0;
                    break;
                }
	          }
	        if(check == 0)
	           break;
	   }
	   printf("%d\n",check);
	}
	return 0;
}
