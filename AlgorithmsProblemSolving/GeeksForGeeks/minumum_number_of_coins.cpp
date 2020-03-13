//https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins/0

#include <bits/stdc++.h>

#define pb push_back

using namespace std;

vector<int> func(int n){
    
    int t = 0;
    vector<int> res;
    vector<int> coins;
	coins.pb(1);
	coins.pb(2);
	coins.pb(5);
	coins.pb(10);
	coins.pb(20);
	coins.pb(50);
	coins.pb(100);
	coins.pb(200);
	coins.pb(500);
	coins.pb(2000);
	
	int i = coins.size()-1;
	
	while(n != 0){
	    
	    if(n < coins[i]){
	        i--;
	        continue;
	    }
	    t = n % coins[i];
	    
	    if(t == 0){ 
	        for(int j = 0; j < n/coins[i]; j++)
	            res.pb(coins[i]);  
	        break;
	    }  
	    else{    
	        res.pb(coins[i]);
	        n = n - coins[i];
	   } 
	}
    return res;
}

int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	    vector<int> res;
	    int n;
	    scanf("%d",&n);
	    
	    res = func(n);
	    
	    for(int i = 0; i < res.size(); i++)
	        printf("%d ",res[i]);
	        
	    printf("\n");
	}
	return 0;
}
