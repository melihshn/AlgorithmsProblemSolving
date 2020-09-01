#include <bits/stdc++.h>

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define loop(n) for(int i=0 ; i<n ; i++)
#define MOD 1000000007

typedef long long int lld;

using namespace std;

void dfs(int n, int source, int node, bool **tcg, int **graph)
{

    tcg[source][node] = true;

    for(int i = 0; i < n; i++)
    {

        if(graph[node][i])
        {

            if(tcg[source][i] == false)
            {
                dfs(n,source,i,tcg,graph);
            }
        }
    }
}

bool **tcFunc(int n, int **graph)
{

    bool **tcg;
    tcg = new bool *[n];

    for(int i = 0; i < n; i++)
    {
        tcg[i] = new bool[n];
        memset(tcg[i], false, n*sizeof(bool));
    }

    for(int i = 0; i < n; i++)
    {
        dfs(n,i,i,tcg,graph);
    }

    return tcg;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ofstream myfile;
    ifstream input("input.txt");
    myfile.open("output.txt");

    int t = -1, q = 1;
    //cin >> t;
    string finput;

    if(input.is_open())
    {
        while(getline(input, finput))
        {
            //cout << finput << '\n';

            if(t == -1)
            {
                stringstream geek(finput);
                geek >> t;
                //cout << "T ; " << t << "\n";

            }

            while(t--)
            {

                int n = 0;
                //cin >> n;
                getline(input, finput);
                stringstream melih(finput);
                melih >> n;

                //cout << "N ; " << n << "\n";

                vector<int> in(n);
                vector<int> out(n);

                bool **tcg;
                tcg = new bool *[n];

                for(int i = 0; i < n; i++)
                {
                    tcg[i] = new bool[n];
                    memset(tcg[i], false, n*sizeof(bool));
                }

                int **graph;
                graph = new int *[n];

                for(int i = 0; i < n; i++)
                {
                    graph[i] = new int[n];
                    for(int j = 0; j < n; j++)
                    {
                        if(i == j)
                            graph[i][j] = 1;
                        else
                            graph[i][j] = 0;
                    }
                }
                char ch;

                string s1, s2;
                //cin >> s1 >> s2;

                getline(input, finput);
                s1 = finput;
                getline(input, finput);
                s2 = finput;

                //cout << "s1 : " << s1 << '\n';
                //cout << "s2 : " << s2 << '\n';

                for(int i = 0; i < n; i++)
                {
                    if(s1[i] == 'Y')
                        in[i] = 1;
                    else
                        in[i] = 0;
                }
                for(int i = 0; i < n; i++)
                {
                    if(s2[i] == 'Y')
                        out[i] = 1;
                    else
                        out[i] = 0;
                }
                for(int i = 0; i < n; i++)
                {
                    if(out[i])
                    {
                        if(i - 1 >= 0 && in[i - 1] == 1)
                            graph[i][i - 1] = 1;
                        if(i + 1 <= n-1 && in[i + 1] == 1)
                            graph[i][i+1] = 1;
                    }
                }
                //cout << "Case #" << q << ":" << endl;
                myfile << "Case #" << q << ":" << "\n";
                tcg = tcFunc(n, graph);

                for(int i = 0; i < n; i++)
                {
                    for(int j = 0; j < n; j++)
                    {
                        if(tcg[i][j] == 1)
                        {
                            myfile << "Y";
                        }
                        else
                        {
                            myfile << "N";
                        }
                    }
                    myfile << "\n";
                }
                q++;
            }
        }
    }
    input.close();
    myfile.close();

    return 0;
}
