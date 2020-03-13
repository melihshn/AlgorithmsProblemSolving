#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/repeated-string/copy-from/142560049

int main()
{
    string s;
    cin >> s;

    long long int n;
    scanf("%lld",&n);

    vector<int> vec;

    for(int i = 0; i < s.length(); i++)
        if(s[i] == 'a')
            vec.push_back(i);
            
    long long int mod = n % s.length();
    long long int res = ((n-mod) / s.length()) * vec.size();

    int i = 0;
    
    if(vec.empty()){
        printf("%d",0);
        return 0;
    }
    while(vec[i] < mod && i < vec.size()){
        res++;
        i++;
    }
    printf("%lld\n",res);

    return 0;
}
