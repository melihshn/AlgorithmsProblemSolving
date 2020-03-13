#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/ctci-array-left-rotation/copy-from/142806257

int main()
{
    int n,d;
    scanf("%d%d",&n,&d);

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
        scanf("%d",&vec[(n-d+i)%n]);
    for(int i = 0; i < n; i++)
        printf("%d ",vec[i]);

    return 0;
}
