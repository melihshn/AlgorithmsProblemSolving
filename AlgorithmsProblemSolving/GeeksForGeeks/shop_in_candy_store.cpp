//https://practice.geeksforgeeks.org/problems/shop-in-candy-store/0

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	    int count = 0,n, k, min = 0, max = 0;
	    
	    scanf("%d%d",&n,&k);
	    vector<int> candies(n);
	    
	    for(int i = 0; i < n; i++)
	        scanf("%d",&candies[i]);
	    
	    sort(candies.begin(),candies.end());
	    
	    int j = 0, h = n-1;
	    
	    while(n > count){
	        min += candies[j];
	        max += candies[h];
	        count++;
	        j++;
	        h--;
	        count += k; 
	    }
	    printf("%d %d\n",min,max);
	}
	return 0;
}
