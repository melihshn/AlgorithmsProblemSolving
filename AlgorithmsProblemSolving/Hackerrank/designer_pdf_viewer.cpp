#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector< pair<char, int> > vec(27);

    int x;

    for(int i = 0; i < 26; i++){

        cin >> x;

        vec[i].first = char(97+i);
        vec[i].second = x;
    }

    string str;
    cin >> str;

    int max = 0;

    for(int i = 0; i < str.size(); i++){

        int y = int(str[i]);
        int diff = y - 97;
        int temp = vec[diff].second;

        if(max < temp)
            max = temp;
    }

    cout << str.size() * max;

    return 0;
}
