#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/bon-appetit/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, anna, bill, sum = 0;
    cin >> n >> anna;

    vector<int> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
        sum += vec[i];
    }

    cin >> bill;

    sum -= vec[anna];

    if((sum / 2) == bill)
        cout << "Bon Appetit";

    else
        cout << bill - (sum/2);

    return 0;
}
