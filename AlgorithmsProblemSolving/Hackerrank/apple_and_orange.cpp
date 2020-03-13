#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/apple-and-orange/copy-from/129362259

int main()
{
    int s, t, apple, orange, m, n, aResult = 0, oResult = 0;

    scanf("%d%d%d%d%d%d",&s,&t,&apple,&orange,&m,&n);

    vector<int> appleVec(m);
    vector<int> orangeVec(n);

    for(int i = 0; i < m; i++){
        scanf("%d",&appleVec[i]);

        if(t >= apple + appleVec[i] && s <= apple + appleVec[i])
            aResult++;
    }
    for(int i = 0; i < n; i++){
        scanf("%d",&orangeVec[i]);

        if(t >= orange + orangeVec[i] && s <= orange + orangeVec[i])
            oResult++;
    }
    printf("%d\n%d",aResult,oResult);
    
    return 0;
}

