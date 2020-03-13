#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/jumping-on-the-clouds/copy-from/142387351

int main()
{
    int n, path = 0;
    scanf("%d",&n);

    vector<int> clouds(n);

    for(int i = 0; i < n; i++)
        scanf("%d",&clouds[i]);

    int i = 0;
    while(i <= n-2){
        if(clouds[i+2] == 0){
            path++;
            i += 2;
        }
        else{
            path++;
            i++;
        }
    }
    printf("%d",path);

    return 0;
}
