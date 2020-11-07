#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/the-hurdle-race/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,k;
    cin >> n >> k;

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
        cin >> vec[i];
    
    sort(vec.begin(), vec.end());

    if(k >= vec[n-1])
        cout << 0;
    
    else
        cout << vec[n-1] - k;

    return 0;
}
