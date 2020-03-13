#include <bits/stdc++.h>
#include <climits>

using namespace std;

//https://www.hackerrank.com/challenges/2d-array/copy-from/142804097

int arr[6][6];
int sumF(int x, int y);

int main()
{
    int sum;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            scanf("%d",&arr[i][j]);
    }
    sum = sumF(0,0);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(sum < sumF(i,j))
                sum = sumF(i,j);
        }
    }
    printf("%d",sum);

    return 0;
}
int sumF(int x, int y){

    int sum = 0;

    for(int i = x; i < x + 3; i++)
        for(int j = y; j < y + 3; j++)
            sum += arr[i][j];

    sum = sum - ( arr[x+1][y] + arr[x+1][y+2]);

    return sum;
}

