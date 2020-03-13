#include <bits/stdc++.h>

#define loop(n) for(int i = 0; i < n; i++) 
#define lli long long int

using namespace std;

//https://practice.geeksforgeeks.org/problems/coin-piles/0

int main() {
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        
        int n, k; 
        lli res = INT_MAX, temp = 0, sumP = 0;
        scanf("%d %d",&n,&k);
        vector<int> piles(n);
        
        loop(n)
            scanf("%d",&piles[i]);
        sort(piles.begin(), piles.end());
        
        loop(n){
            temp = sumP;
            sumP += piles[i];
            
            for(int j = n-1; j>i; j--){
                
                int diff = piles[j] - piles[i];
                
                if(diff > k)
                    temp += diff - k;
            }
            res = min(res, temp);
        }
        printf("%d\n",res);
    }
	return 0;
}
