#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string word;
        cin >> word;
        if (word.length() <= 10)
        {
            cout << word << endl;
        }
        else
        {
            char first = word.front();
            char last = word.back();
            int size = word.length() - 2;
            std::cout << first << size << last << endl;
        }
    }
}