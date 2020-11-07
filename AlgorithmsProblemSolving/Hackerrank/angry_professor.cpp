#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/angry-professor/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n,k;
        cin >> n >> k;

        vector<int> vec(n);

        for(int i = 0; i < n; i++)
            cin >> vec[i];

        sort(vec.begin(),vec.end());

        int count = 0;

        for(int i = 0; i < n; i++){

            if(vec[i] <= 0)
                count++;
            else
                break;
        }
        if(count >= k)
            cout << "NO\n";
        
        else
            cout << "YES\n";
    }

    return 0;
}
