#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/electronics-shop/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int b,n,m;
    cin >> b >> n >> m;

    vector<int> keyboard(n);
    vector<int> driver(m);

    for(int i = 0; i < n; i++)
        cin >> keyboard[i];

    for(int i = 0; i < m; i++)
        cin >> driver[i];

    int sum = 0;
    int max = -1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            sum = keyboard[i];
            sum += driver[j];

            if(sum <= b && sum > max)
                max = sum;
        }
    }

    cout << max;

    return 0;
}
