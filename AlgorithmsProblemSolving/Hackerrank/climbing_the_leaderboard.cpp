#include <bits/stdc++.h>

#define f first
#define s second
#define mp make_pair
#define pb push_back

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int> > ranked(n);

    cin >> ranked[0].f;
    ranked[0].s = 1;

    for(int i = 1; i < n; i++){
        cin >> ranked[i].f;

        if(ranked[i].f == ranked[i-1].f){
            ranked[i].s = ranked[i-1].s;
        }

        else{
            ranked[i].s = ranked[i-1].s + 1;
        }
    }

    int m;
    cin >> m;

    vector<int> player(m);
    vector<int> vec(m);

    for(int i = 0; i < m; i++)
        cin >> player[i];


    int temp_j = 0;

    for(int i = 0; i < m; i++){
        for(int j = temp_j; j < n; j++){

            if(player[m-i-1] >= ranked[j].f){
                vec[m-i-1] = ranked[j].s;
                break;
            }

            else if(j == n-1){
                vec[m-i-1] = ranked[j].s+1;
                break;
            }

            temp_j++;
        }
    }

    for(int i = 0; i < m; i++)
        cout << vec[i] << endl;

    return 0;
}
