#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/day-of-the-programmer/problem

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int year;
    cin >> year;

    if(year % 400 == 0)
        cout << "12.09." << year;

    else if((year < 1917 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << "12.09." << year;

    else if(year == 1918)
        cout << "26.09." << year;

    else
        cout << "13.09." << year;

    return 0;
}
