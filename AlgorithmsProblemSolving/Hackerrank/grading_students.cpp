#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/grading/copy-from/129360951

int main(){

    int n;
    scanf("%d",&n);

    vector<int> vec(n);
    vector<int> result(n);

    for(int i = 0; i < n; i++){
        scanf("%d",&vec[i]);

        int mod = vec[i] % 5;

        if(mod > 2 && vec[i] > 37)
            result[i] = vec[i] + (5-mod);
        else
            result[i] = vec[i];
    }
    for(int i = 0; i < n; i++)
        printf("%d\n",result[i]);

    return 0;
}

