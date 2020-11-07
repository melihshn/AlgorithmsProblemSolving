#include<bits/stdc++.h>

using namespace std;

// https://www.hackerrank.com/challenges/kangaroo/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int x1,v1,x2,v2;
    int vDiff;
    int xDiff;

    cin >> x1>>v1>>x2>>v2;

    if(x1 > x2){

        if(v2 > v1){

            vDiff = v2 - v1;
            xDiff = x1 - x2;

            if(xDiff % vDiff == 0)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";
    }
    else if(x2 > x1){

        if(v1 > v2){

            vDiff = v1 - v2;
            xDiff = x2 - x1;

            if(xDiff % vDiff == 0)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";
    }
    else{

        cout << "YES";
    }

    return 0;
}
