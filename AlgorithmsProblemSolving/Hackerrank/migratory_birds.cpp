#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/migratory-birds/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n,0);

    int x;
    int max = 0;
    int res_index = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        vec[x]++;

        if(max < vec[x]){
            max = vec[x];
            res_index = x;
        }
        else if(max == vec[x]){

            if(res_index > x){
                max = vec[x];
                res_index = x;
            }
        }
    }

    cout << res_index;

    return 0;
}
