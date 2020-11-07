#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/picking-numbers/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i  = 0; i < n; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    int count = 0;
    int max = 0;
    int temp = vec[0];

    for(int i = 1; i < n; i++){

        int diff = vec[i] - temp;

        if(diff <= 1){
            count++;

            if(count > max)
                max = count;
        }
        else{
            temp = vec[i];
            count = 0;
        }
    }

    cout << max+1;

    return 0;
}
