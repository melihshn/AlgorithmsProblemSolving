#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
        cin >> vec[i];

    int max = vec[0];
    int min = vec[0];

    int min_diff = 0;
    int max_diff = 0;

    for(int i = 1; i < n; i++){

        if(vec[i] > max){
            max = vec[i];
            max_diff++;
        }

        else if(vec[i] < min){
            min = vec[i];
            min_diff++;
        }

    }

    cout << max_diff << " " << min_diff;

    return 0;
}
