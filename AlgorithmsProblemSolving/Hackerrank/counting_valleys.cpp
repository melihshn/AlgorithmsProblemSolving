#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/counting-valleys/copy-from/142342878

int main()
{
    int n, level = 0, countV = 0, temp;
    char ch;
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf(" %c",&ch);

        temp = level;

        if(ch == 'D')
            level--;
        else
            level++;

        if(temp == 0 && level == -1)
            countV++;
    }
    printf("%d",countV);

    return 0;
}

