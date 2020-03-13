#include <bits/stdc++.h>

using namespace std;

//https://practice.geeksforgeeks.org/problems/kth-smallest-factor/0

int main() {
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        
        long long n,k;
        vector<long long> divisors;
        scanf("%lld%lld",&n,&k);
        
        for(long long i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(n / i == i)
                    divisors.push_back(i);
                else{
                    divisors.push_back(i);
                    divisors.push_back(n/i);
                }
            }
        }
        sort(divisors.begin(),divisors.end());

        if(k <= divisors.size())
            printf("%lld\n",divisors[k-1]);
        else
            printf("%d\n",-1);
    }
    return 0;
}
