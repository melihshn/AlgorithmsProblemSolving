//https://practice.geeksforgeeks.org/problems/good-pairs/0

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t,n;
	scanf("%d",&t);
	
	while(t--){
	    
	    int equal = 0;
	    scanf("%d",&n);
	    
	    vector<int> arr(n);

	    for(int i = 0; i < n; i++)
	        scanf("%d",&arr[i]);
	    
	    int pairs = 0;
        int lastpair = 0;
	    sort(arr.begin(),arr.end());
	    
	    for(int i = 1; i < n; i++){
	        if(arr[i] == arr[i-1])
                pairs+= lastpair;
            else{
                pairs += i;
                lastpair = i;
            }
	    }
	    printf("%d\n",pairs);
	}
	return 0;
}
