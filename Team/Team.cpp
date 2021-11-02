#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int contador = 0;
    for (int i = 0; i < n; ++i)
    {
        int p, v, t;
        cin >> p >> v >> t;
        if ((p + v + t) > 1)
        {
            contador++;
        }
    }
    cout << contador << endl;
    return 0;
}