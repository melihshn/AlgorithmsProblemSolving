#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/the-birthday-bar/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,d,m;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
        cin >> vec[i];

    cin >> d >> m;
    vector<vector<int> > dp( n , vector<int> (n, 0));

    for(int i = 0; i < n; i++){
        dp[i][i] = vec[i];

        for(int j = i+1; j < n; j++)
            dp[i][j] += (dp[i][j-1] + vec[j]);

    }
    int result = 0;
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            //cout << dp[i][j] << " ";
            c++;
            if(dp[i][j] == d && c == m)
                result++;
        }
        //cout << endl;
        c = 0;
    }
    cout << result;

    return 0;
}
