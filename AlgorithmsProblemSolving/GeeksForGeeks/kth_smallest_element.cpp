#include <bits/stdc++.h>

using namespace std;

//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

int main() {
	
	int t,n;
	scanf("%d",&t);
	
	vector< vector<int> > arrays(t);
	vector< int > smallest(t);
	
	for(int i = 0; i < t; i++){
	    scanf("%d",&n);
	    arrays[i] = vector<int>(n);
	    
	    for(int j = 0; j < n; j++)
	        scanf("%d",&arrays[i][j]);
	
	    scanf("%d",&smallest[i]);
	}
	for(int i = 0; i < t; i++){
	    sort(arrays[i].begin(),arrays[i].end());   
	    printf("%d\n",arrays[i][smallest[i]-1]);
	}
	return 0;
}
