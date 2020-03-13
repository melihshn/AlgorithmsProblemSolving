#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/sock-merchant/copy-from/142317645

int main(){

    int n;
    int pair = 0;
    scanf("%d",&n);

    vector<int> socks(n);

    for(int i = 0; i < n; i++)
        scanf("%d",&socks[i]);

    sort(socks.begin(), socks.end());

    for(int i = 0; i < n-1; i++){
        if(socks[i] == socks[i+1]){
            pair++;
            i++;
        }
    }
    printf("%d",pair);
    
    return 0;
}
