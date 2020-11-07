#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/drawing-book/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,p;

    cin >> n >> p;

    int min = (n/2)-(p/2);

    if(min > (p/2))
        min = p/2;

    cout << min;

    return 0;
}
