#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    int q,a,b,c;
    cin >> q;

    while(q--){

        cin >> a >> b >> c;

        if(fabs(a-c) > fabs(b-c))
            cout << "Cat B" << endl;

        else if(fabs(b-c) > fabs(a-c))
            cout << "Cat A" << endl;

        else
            cout << "Mouse C" << endl;

    }

    return 0;
}
