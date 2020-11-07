#include<bits/stdc++.h>

using namespace std;

// https://www.hackerrank.com/challenges/birthday-cake-candles/problem

typedef long long lld;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++){

        cin >> vec[i];
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int res = 1;
    int index = 1;

    while(vec[0] == vec[index]){

        res++;
        index++;
    }

    cout << res;

    return 0;
}
