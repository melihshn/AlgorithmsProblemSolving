//https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room/0

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	    int l;
	    scanf("%d",&l);
	    
	    vector< pair<int,int> > s(l);
	    vector< pair<int,int> > f(l);
	    vector< int > res;
	    
	    for(int i = 0; i < l; i++){
	        scanf("%d",&s[i].first);
	        s[i].second = i+1;
	    }	        
	    for(int i = 0; i < l; i++){
	        scanf("%d",&f[i].first);
	        f[i].second = i+1;
	    }
	    sort(f.begin(),f.end());
	    
	    int finTime = -1;
	
	    for(int i = 0; i < l; i++){
	        
	        if( s[ f[i].second - 1 ].first < finTime)
	            continue;
	        res.push_back(f[i].second);
	        finTime = f[i].first;
	    }
	    for(int i = 0; i < res.size(); i++)
	        printf("%d ",res[i]);
	    
	    printf("\n");
	}
	return 0;
}
