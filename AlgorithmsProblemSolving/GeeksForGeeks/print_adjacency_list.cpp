//https://practice.geeksforgeeks.org/problems/print-adjacency-list/0

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	    int e,v;
	    scanf("%d%d",&e,&v);
	    
	    vector<int> graph[e];
	    int x,y;
	    
	    while(v--){
	        scanf("%d%d",&x,&y);
	        
	        graph[x].push_back(y);
	        graph[y].push_back(x);
	    }
	    
	    for(int i = 0; i < e; i++){
	         printf("%d",i);
	         for(int j = 0; j < graph[i].size(); j++)
	             printf("-> %d",graph[i][j]);
	         printf("\n");
	    }
	}
	return 0;
}
