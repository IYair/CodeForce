#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,k;
    cin >> n >> k;
    int contador = 0;
    int p[n] = {};

    for (int i = 0; i < n; ++i)
    {
        cin >>  p[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (p[j] >= p[k - 1] && p[j] != 0)
        {
            contador++;
        }
    }
    
    cout << contador << endl;
    return 0;
}
