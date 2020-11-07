#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

//https://www.hackerrank.com/challenges/between-two-sets/problem

int gcd(int a, int b){

    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int lcd(int a, int b){

    return (a*b) / gcd(a,b);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,m;

    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < m; i++)
        cin >> b[i];

    sort(b.begin(), b.end());

    int lcd_res = a[0];

    for(int i = 1; i < n; i++)
        lcd_res = (a[i] * lcd_res) / gcd(a[i] , lcd_res);

    vector<int> vec;

    int c = 1;

    for(int i = lcd_res; i <= b[0]; i = lcd_res * c){

        int mod = -1;

        for(int j = 0; j < b.size(); j++){

            mod = b[j] % i;

            if(mod != 0)
                break;
        }
        if(mod == 0)
            vec.push_back(i);
        
        c++;
    }
    cout << vec.size() << endl;

    return 0;
}
