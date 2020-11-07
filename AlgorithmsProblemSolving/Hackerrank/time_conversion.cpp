#include <bits/stdc++.h>

using namespace std;

//https://www.hackerrank.com/challenges/time-conversion/problem

string timeConversion(string s){

    bool pm = 0;

    if(s[8] == 'P')
        pm = 1;

    string temp;
    temp += s[0];
    temp += s[1];

    stringstream geek(temp);  
    int x = 0; 
    geek >> x;

    string number;

    if(pm){

        if(x < 12){

            x += 12;
            number = to_string(x);

            s[0] = number[0];
            s[1] = number[1];
        }
    }
    else{

        if(x >= 12){

            x -= 12;
            number = to_string(x);

            if(x >= 10){
                s[0] = number[0];
                s[1] = number[1];
            }
            else{
                s[0] = '0';
                s[1] = number[0];
            }
        }
    }
    s.erase(8);
    
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
