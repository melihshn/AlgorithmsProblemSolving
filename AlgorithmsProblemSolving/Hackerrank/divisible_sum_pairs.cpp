#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,k;
    cin >> n >> k;

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
        cin >> vec[i];

    int result = 0;

    for(int i = 0; i < n-1; i++){
        for(int j = i +1; j < n; j++)
            if((vec[i] + vec[j]) % k == 0)
                result++;
    }

    cout << result;

    return 0;
}

